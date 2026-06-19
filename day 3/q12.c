#include<stdio.h>
int main()
{
int a,b,r,m,n,LCM;
printf("enter two numbers");
scanf("%d%d",&a,&b);
if(a>b)
{
    r=a%b;
    m=a/r;
    n=b/r;
    LCM=r*m*n;
}
else if(a<b)
{
    r=b%a;
    m=a/r;
    n=b/r;
    LCM=r*m*n;
}
else
printf("no result");
printf("LCM of %d and %d is %d",a,b,LCM);
    return 0;
}
