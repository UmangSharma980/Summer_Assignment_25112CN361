#include<iostream>
int merge(int a[5],int b[5],int c)
{
for(int i=0;i<c;i++)
{
std::cout<<a[i]<<"\t";
}
for(int i=0;i<c;i++)
{
std::cout<<b[i]<<"\t";
}
}
int main()
{
int a[5],b[5],f;
int size = sizeof(a)/sizeof(a[0]);
std::cout<<"Enter values for array 1 ::\n";
for(int i=0;i<size;i++)
{
    std::cin>>a[i];
}
std::cout<<"Enter values for array 2 ::\n";
for(int i=0;i<size;i++)
{
    std::cin>>b[i];
}
std::cout<<"\n";
std::cout<<"The merged array is :: \n";
f=merge(a,b,size);    
return 0;
}
