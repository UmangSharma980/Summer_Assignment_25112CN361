#include<iostream>
int main(){
int n,i,r,binary=0;
std::cout<<"enter a number"<<std::endl;
std::cin>>n;
while(n!=0)
{
r=n%2;
binary=binary*10+r;
n=n/2;
}
int rev=0,b;
while(binary!=0)
{
    b=binary%10;
    rev=rev*10+b;
    binary/=10;
}
std::cout<<rev<<std::endl;
    return 0;
}
