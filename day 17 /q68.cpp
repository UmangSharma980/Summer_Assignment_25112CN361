#include<iostream>
int main()
{
    std::string a[5],b[5];
    int size = sizeof(a)/sizeof(a[0]);
    std::cout<<"Enter elements in string 1 :: \n";
    for(int i=0;i<size;i++)
    {
        std::cin>>a[i];
    }
    std::cout<<"\n";
    std::cout<<"Enter elements in string 2 :: \n";
    for(int i=0;i<size;i++)
    {
        std::cin>>b[i];
    }
    std::cout<<"\n";
    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size;j++)
        {
            if(a[i]==b[j])
            {
                std::cout<<a[i]<<"\t";
            }
        }
    }
    return 0;
}
