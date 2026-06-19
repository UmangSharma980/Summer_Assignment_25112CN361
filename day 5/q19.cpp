#include<iostream>
int main()
{
int n,i=1;
std::cout<<"enter a number"<<std::endl;
std::cin>>n;
while(i<=n)
{
if(n%i==0)
{
    std::cout<<i<<"\t";
}
i++;
}
    return 0;
}
