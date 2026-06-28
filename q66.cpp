#include<iostream>
int uni(int a[5],int b[5],int c)
{
int i;
for(i=0;i<c;i++)
{
    std::cout<<a[i]<<"\t";
}
for(i=0;i<c;i++)
{
    if(a[i]==b[i])
    {
        std::cout<<"";
    }
    else
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
f=uni(a,b,size);
    return 0;
}