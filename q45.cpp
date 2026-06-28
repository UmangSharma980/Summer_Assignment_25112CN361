#include<iostream>
int pallidrome(int a)
{
int i,rev=0,r;
i=a;
while(a!=0)
{
    r=a%10;
    rev=rev*10+r;
    a/=10;
}
a=i;
if(rev==a)
{
    std::cout<<"It is a pallidrome number"<<std::endl;
}
else
{
    std::cout<<"It is not a pallidrome number"<<std::endl;
}
}
int main()
{
int n,f;
std::cout<<"enter a number"<<std::endl;
std::cin>>n;
f=pallidrome(n);
    return 0;
}