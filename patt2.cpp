#include<iostream>
int main()
{
    int n;
    std::cin>>n;
    int count=0;

    for(int i=1;i<=n;i++)
    {
        for(int j=i;j<=n;j++)
        {
            std::cout<<count<<" ";
            count++;
        }
        std::cout<<'\n';
    }
}