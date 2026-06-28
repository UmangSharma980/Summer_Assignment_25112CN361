#include<iostream>
int perfect(int a)
{
int i=1,factor=0;
while(i<a)
{
    if(a%i==0)
    {
       
        factor=factor+i;
    }
    i++;
}
std::cout<<" sum of factors is "<<factor;
std::cout<<"\n";
if(factor==a)
{
    std::cout<<"It is a perfect no"<<std::endl;
}
else
{
    std::cout<<"It is not a perfect no";
}
}
int main()
{
int n,f;
std::cout<<"enter a number"<<std::endl;
std::cin>>n;
f=perfect(n);
    return 0;
}
