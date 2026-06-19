#include<iostream>
int main()
{
int n,i,j;
std::cout<<"enter the no of rows"<<std::endl;
std::cin>>n;
for(i=1;i<=n;i++)
{
for(j=1;j<=i;j++)
{
    std::cout<<"*";
}
std::cout<<"\n";
}
    return 0;
}