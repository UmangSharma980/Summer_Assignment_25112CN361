#include<iostream>
int strong(int a)
{
int r,fact,i,sum=0;
while(a!=0)
{
r=a%10;
fact=1;
i=1;
while(i<=r)
{
    fact=fact*i;
    i++;
}
sum=sum+fact;
a=a/10;
}

return sum;
}
int main ()
{
int b,f;
std::cout<<"enter a number"<<std::endl;
std::cin>>b;
f=strong(b);
if(f==b)
{
    std::cout<<"no is a strong no"<<std::endl;
}
else{
    std::cout<<"no is not a strong no";
}
    return 0;
}
