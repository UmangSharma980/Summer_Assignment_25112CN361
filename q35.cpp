#include<iostream>
int main()
{
int n,i,j;
char ch='A';
std::cout<<"enter the no of rows"<<std::endl;
std::cin>>n;
for(i=1;i<=n;i++)
{
for(j=1;j<=i;j++)
{
    std::cout<<" "<<ch;
}
std::cout<<"\n";
ch++;
}
    return 0;
}