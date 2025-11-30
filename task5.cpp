#include<iostream>

int main()
{
int x, y;
int m = 1;
std::cout<<"enter numbers"<<'\n';
std::cin>>x;
std::cin>>y;

for(int i = 0; i < x; i++)
{
int n = i + 1;

if(i % 2 == 1)
{
m = m + y - 1;

while(m > y * i)
{
std::cout<<m<<" ";
m--;
}
m = m + y + 1;

}

else
{

while(m <= y * n)
{
std::cout<<m<<" ";
m++;
}

}

std::cout<<'\n';
}
}




