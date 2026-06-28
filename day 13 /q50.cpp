#include<iostream>
int main()
{
int num[5];
std::cout<<"enter some values"<<"\n";
int size = sizeof(num)/sizeof(num[0]);
for(int i=0;i<size;i++)
{
    std::cin>>num[i];
}
std::cout<<"sum of stored values is ::";
int sum=0;
for(int i=0;i<size;i++)
{
    sum+=num[i];
}
std::cout<<sum;
std::cout<<"\n";
std::cout<<"average of stored numbers is ::\t";
float avg=(float)sum/5;
std::cout<<avg;
    return 0;
}
