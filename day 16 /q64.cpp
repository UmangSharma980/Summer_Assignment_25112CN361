#include<iostream>
int main()
{
    int a[6],i;
    std::cout<<"Enter some values ::\n";
    int size = sizeof(a)/sizeof(a[0]);
    for(i=0;i<size;i++)
    {
        std::cin>>a[i];
    }
    std::cout<<"\n";
    std::cout<<"The entered values are ::\n";
    for(i=0;i<size;i++)
    {
        std::cout<<a[i]<<"\t";
    }
    int k,j;
     i=0;
    while(i<size)
    {
   k=a[i];
   j=0;
   while (j<size)
   {
    if(a[j]==k)
    {
        std::cout<<a[j]<<"\t";
    }
    j++;
   }
   i++;
    }
    return 0;
}
