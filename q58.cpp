#include<iostream>
int main()
{
int a[5],i,rev[5];
std::cout<<"Enter some values"<<"\n";
int size = sizeof(a)/sizeof(a[0]);
for(i=0;i<size;i++)
{
std::cin>>a[i];
}
std::cout<<"\n";
std::cout<<"The entered values are ::\n";
for(i=0;i<size;i++)
{
std::cout<<a[i]<<"\t";
}
std::cout<<"\n";
std::cout<<"rotate array left is ::"<<"\n";
for(i=0;i<size;i++)
{
rev[i]=a[i+1];
}
rev[size-1]=a[0];
for(i=0;i<size;i++)
{
std::cout<<rev[i]<<"\t";
    }
        return 0;
}