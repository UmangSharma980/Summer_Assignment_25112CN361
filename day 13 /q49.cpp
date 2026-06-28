#include<iostream>
int main()
{
std::string a[5];
std::cout<<"enter your data"<<std::endl;
int size = sizeof(a)/sizeof(a[0]);
for(int i=0;i<size;i++)
{
    std::getline(std::cin,a[i]);
}
std::cout<<"your stored data is ::\n";
for(
    int i=0;i<size;i++
)
{
    std::cout<<a[i]<<"\n";
}
    return 0;
}
