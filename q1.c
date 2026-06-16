#include<stdio.h>
int main()
{
int n,i=1,sum=0;
printf("enter a number");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
    sum=sum+i;
}
printf("sum of %d is %d",n,sum);
    return 0;
}