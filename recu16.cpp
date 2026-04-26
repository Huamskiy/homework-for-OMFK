#include<iostream>
#include<vector>

void subsets(std::vector<int>& v, std::vector<bool>& ban, int index, int counter, int ban_counter)
{
    // we need 'counter' because we want to know when we might ban a position
    // we need 'ban_counter' to end program at the right time

    if (ban_counter == v.size()) // base case
    {
        std::cout << "}";
        return;
    }
    
    if (index == v.size())      
    {
        std::cout << "}" << '\n';

        for (int g = ban.size() - 1; g > 0; g--)       // rotate bans position
        {
            ban[g] = ban[g - 1];
            ban[g - 1] = false;
            if (g == 1)
            {
                ban[0] = ban[v.size()];
                ban[ban.size() - 1] = false;
            }
        }

        if (counter == v.size())        // add other bans for narrowing the output field
        {
            counter = 0;
            ban[ban_counter] = true;
            ban_counter++;
        }

        for (int k = 0; k < ban.size(); k++)        // add first ban and forget
        {
            if (ban[k] == true)
                break;
            if (k == ban.size() - 1 && ban[k] != true)
            {
                ban[0] = true;
                ban_counter++;
            }
        }

        counter++;
        index = 0;
    }

    if (index == 0)
    {
        std::cout << " { ";     // start of each set
    }

    if (ban[index] == true)
    {
        return subsets(v, ban, index + 1, counter, ban_counter);        // if our index has banned we skip it
    }
    else
    {
        std::cout << v[index] << " ";
        return subsets(v, ban, index + 1, counter, ban_counter);        // if index not under ban we output it to set
    }
}

int main()
{
    std::vector<int> array = { 1, 2, 3 };
    std::vector<bool> ban;
    ban.resize(array.size() + 1);

    for (int i = 0; i < ban.size(); i++)
    {
        ban[i] = false;
    }
    subsets(array, ban, 0, 0, 0);
}