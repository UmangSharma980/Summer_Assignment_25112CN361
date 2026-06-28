#include<iostream>
int fact(int a)
{
    int fact=1,i=1;
    while(i<=a)
    {
        fact=fact*i;
        i++;
    }
    return fact;
}
int main()
{
int b,f;
std::cout<<"enter a number";
std::cin>>b;
f=fact(b);
std::cout<<f<<" ";
    return 0;
}
