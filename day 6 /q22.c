#include<stdio.h>
#include<math.h>
int main()
{
int r,n,count=0,decimal=0,a,m;
printf("enter a binary no \n");
scanf("%d",&n);
m=n;
while(n!=0)
{
r=n%10;
count++;
n/=10;
}
printf("count is %d",count);
printf("\n");
n=m;
while(n!=0)
{
a=n%10;
decimal=decimal+a*pow(2,count);
n/=10;
count--;
}
printf("decimal no is %d",decimal);
    return 0;
}
