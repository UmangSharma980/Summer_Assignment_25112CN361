#include<iostream>
int main()
{
int num[6];
std::cout<<"enter some values"<<"\n";
int i;
int size = sizeof(num)/sizeof(num[0]);
for(i=0;i<size;i++)
{
std::cin>>num[i];
}
std::cout<<"greater value and smaller value are respectively :: \n";
int max=0,min=0,min1;
for(i=0;i<size;i++)
{
     max = std::max(max,num[i]);
}
for(i=0;i<size;i++)
{
    min = std::min(min,num[i]);
    min1=min;
    if(min1<min)
    {
        min=min1;
    }
}
std::cout<<max<<"\n";
std::cout<<min<<"\n";
    return 0;
}