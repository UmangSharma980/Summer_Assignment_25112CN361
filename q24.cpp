#include<iostream>
int main()
{
int r=1,x,i=1,n;
std::cout<<"enter a number"<<std::endl;
std::cin>>x;
std::cout<<"enter the power of a number"<<std::endl;
std::cin>>n;
while(i<=n)
{
    r=x*r;
    i++;
}
std::cout<<"value of no raised to the power is "<<r<<std::endl;
    return 0;
}