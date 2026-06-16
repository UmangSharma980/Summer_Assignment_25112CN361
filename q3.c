#include<stdio.h>
int main()
{
int f=1,i=1,n;
printf("enter a number");
scanf("%d",&n);
while(i<=n)
{
    f=f*i;
    i++;
}
printf("factorial of %d is %d",n,f);
    return 0;
}