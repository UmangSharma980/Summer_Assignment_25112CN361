#include<stdio.h>
int main()
{
int i=1,n,f;
printf("enter a number for table");
scanf("%d",&n);
while(i<=10)
{
    f=n*i;
    printf("%d*%d = %d\n",n,i,f);
    i++;
}
    return 0;
}
