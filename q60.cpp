#include<iostream>
int main ()
{
int i,a[5];
std::cout<<"Enter some values :: \n";
int s = sizeof(a)/sizeof(a[0]);
for(i=0;i<s;i++)
{
    std::cin>>a[i];
}
std::cout<<"\n";
std::cout<<"Entered values are :: \n";
for(i=0;i<s;i++)
{
    std::cout<<a[i];
}
for(i=0;i<s;i++)
{
    if(a[i]==0)
    {
        a[i]=a[i+1];
    }
}
for(i=0;i<s;i++)
{
    std::cout<<a[i]<<"\t";
}
    return 0;
}