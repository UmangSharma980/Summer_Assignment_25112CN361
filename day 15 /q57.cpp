//completed
#include<iostream>
int main()
{
int a[5],rev[5];
std::cout<<"enter some values"<<std::endl;
int i=0;
int size = sizeof(a)/sizeof(a[0]);
for(i=0;i<size;i++)
{
    std::cin>>a[i];
}
std::cout<<"\n";
std::cout<<"the entered values are :: \n";
for(i=0;i<size;i++)
{
    std::cout<<a[i]<<"\t";
}
std::cout<<"\n";
std::cout<<"The reverse of entered values are::\n";
for(i=0;i<size;i++)
{
    rev[i]=a[size-1-i];
}
for(i=0;i<size;i++)
{
    std::cout<<rev[i]<<"\t";
}
    return 0;
}
