#include<stdio.h>
int GCD(int a , int b)
{
    if(a%b==0)
    return b;
    else 
    return GCD(b,a%b);
}
int main()
{
int m,n,f;
printf("enter two numbers");
scanf("%d%d",&m,&n);
f=GCD(m,n);
printf("GCD of %d and %d is %d",m,n,f);
    return 0;
}
