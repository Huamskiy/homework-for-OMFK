#include<iostream>

int main()
{
int height, width;
std::cout<<"enter height and width"<<'\n';
std::cin>>height;
std::cin>>width;

int x = 0;

while(x < height)
{
int y = 0;

while(y < width)
{
std::cout<<"*";
y++;
}

std::cout<<std::endl;
x++;

}

}
