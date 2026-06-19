#include<iostream>
int digit(int a)
{
    if(a==0)
    return a;
    else 
    return a%10+digit(a/10);
}
int main()
{
int b,f;
std::cout<<"enter a number"<<std::endl;
std::cin>>b;
f=digit(b);
std::cout<<"sum of digits is "<<f<<std::endl;
    return 0;
}
