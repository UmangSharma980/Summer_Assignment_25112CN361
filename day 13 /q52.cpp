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
std::cout<<"Number of even numbers are :: \n";
int even=0,odd=0;
for(int i=0;i<size;i++)
{
    if(num[i]%2==0)
    {
    even++;
    }
    else
    {
        odd++;
    }
}
std::cout<<even<<"\n";
std::cout<<"Number od odd numbers are :: \n";
std::cout<<odd;
    return 0;
}
