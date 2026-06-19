#include<iostream>
int fact(int a)
{

    if(a==1)
    return a;
    else
    return a*fact(a-1);
}
int main()
{
int b,f=0;
std::cout<<"enter a number"<<std::endl;
std::cin>>b;
f=fact(b);
std::cout<<"factorial is "<<f<<std::endl;
    return 0;
}
