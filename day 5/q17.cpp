#include<iostream>
int main()
{
int n,i=1,sum=0,N;
std::cout<<"enter a number"<<std::endl;
std::cin>>n;
N=n;
while(i<n)
{
    if(n%i==0)
    {
sum=sum+i;
    }
    i++;
}
    std::cout<<"sum of digits is "<<sum<<std::endl;
if(N==sum)
{
    std::cout<<"it is a perfect no"<<std::endl;
}
else
std::cout<<"not a perfect no"<<std::endl;
    return 0;
}
