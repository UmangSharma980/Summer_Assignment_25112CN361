//completed
#include<iostream>
int right(int a[5],int c)
{
    int i,rev[5];
for(i=0;i<c;i++)
{
    std::cin>>a[i];
}
std::cout<<"The entered value are ::\n";
for(i=0;i<c;i++)
{
    std::cout<<a[i]<<"\t";
}
std::cout<<"\n";
std::cout<<"The right rotated array is ::\n";
for(i=0;i<c-1;i++)
{
rev[i+1]=a[i];
}
rev[0]=a[c-1];
for(i=0;i<c;i++)
{
    std::cout<<rev[i]<<"\t";
}
}
int main()
{
int b[5],f;
std::cout<<"Enter some values ::\n";
int size = sizeof(b)/sizeof(b[0]);
f=right(b,size);
    return 0;
}
