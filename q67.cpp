#include<iostream>
int intersection(int a[5],int b[5],int c)
{
    for(int i=0;i<c;i++)
    {
        for(int j=0;j<c;j++)
        {
        if(a[i]==b[j])
        {
            std::cout<<a[i]<<"\t";
        }
    }
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
f=intersection(a,b,size);
    return 0;
}