#include<stdio.h>
int main()
{
int r,n,pro=1;
printf("enter a number");
scanf("%d",&n);
while(n!=0)
{
    r=n%10;
pro=pro*r;
n=n/10;
}
printf("product of digits is %d",pro);
    return 0;
}