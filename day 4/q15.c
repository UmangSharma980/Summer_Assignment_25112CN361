#include<stdio.h>
#include<math.h>
int main()
{
int count=0,n,r,u,power=0,N;
printf("enter a number");
scanf("%d",&n);
N=n;
while(n!=0)
{
   n=n/10;
count++;
}
printf("no of digits is %d\n",count);
n=N;
while(n!=0)
{
    u=n%10;
power=power+pow(u,count);
n=n/10;
}
printf("sum of digits raises to the power is %d\n",power);
if(N==power)
{
    printf("armstrong no");
}
else
printf("not armstrong no");
    return 0;
}
