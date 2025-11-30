#include<iostream>

int main()
{
int size;
std::cout <<"enter a size of rhombus"<<'\n';
std::cin >> size;
int n = 0;
int x = size / 2;

for(int i = 0; i < size; i++)
{

for(int g = 0; g < size; g++)
{
if(g == x - n)
{
while(g <= x + n)
{
std::cout<<"*";
g++;
}
}
else
{
std::cout<<" ";
}
}

if(i < size / 2)
{
n++;
}
else
{
n--;
}
std::cout<<'\n';

}
}
