#include<iostream>
int main()
{
int n,i,j;
std::cout<<"enter the no of rows"<<std::endl;
std::cin>>n;
for(i=n;i>=1;i--)
{
    for(j=1;j<=i;j++)
    {
        std::cout<<" "<<j;
    }
    std::cout<<"\n";
}
    return 0;
}