#include<stdio.h>
int main()
{
int n,i=1,count=0;
printf("enter a number");
scanf("%d",&n);
while(i<=n)
{
    if(n%i==0)
    {
        count++;
    }
    i++;
}
if(count==2)
{
    printf("prime no");
}
else
printf("not prime no");
    return 0;
}