#include<stdio.h>
int main()
{
int r,rev=0,n,N;
printf("enter a number");
scanf("%d",&n);
N=n;
while(n!=0)
{
    r=n%10;
    rev=rev*10+r;
    n=n/10;
}
printf("reverse of number is %d\n",rev);
if(N==rev)
{
    printf("pallidrome no");
}
else
printf("not pallidrome no");
    return 0;
}
