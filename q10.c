#include<stdio.h>
int main()
{
int start,end,i,j,p;
printf("enter lower and upper prime");
scanf("%d%d",&start,&end);
for(i=start;i<=end;i++)
{
    if(i<=1)
    continue;
    p=1;
    for(j=2;j<i;j++)
    {
        if(i%j==0)
        {
            p=0;
            break;
        }
    }
    if(p==1)
    {
        printf("%d\t",i);
    }
}
    return 0;
}