#include<iostream>
int sum(int a,int b)
{
    int add=0;
    add=a+b;
    return add;
}
int main()
{
    int m,n,f;
    std::cout<<"enter two numbers"<<std::endl;
    std::cin>>m>>n;
f=sum(m,n);
std::cout<<" "<<f;
}
