#include<stdio.h>
int main()
{
int r,rev=0,i,n;
printf("enter a number");
scanf("%d",&n);
while(n!=0)
{
r=n%10;
rev=rev*10+r;
n=n/10;
}
printf("reverse of a number is %d",rev);
    return 0;
}