#include<iostream>
int fib(int n)
{
    if(n==0||n==1)
    return n;
    else
    return fib(n-1)+fib(n-2);
}
int main()
{
int num,f,i;
std::cout<<"enter a number"<<std::endl;
std::cin>>num;
for(i=0;i<num;i++)
{
    f=fib(i);
    std::cout<<f<<"  \t";
}
    return 0;
}
