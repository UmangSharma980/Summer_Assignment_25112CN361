#include<iostream>
int max(int a,int b)
{
if(a>b)
return a;
else
return b;
}
int main()
{
int m,n,f;
std::cout<<"enter two numbers"<<std::endl;
std::cin>>m>>n;
f=max(m,n);
std::cout<<f<<" is greater";
}