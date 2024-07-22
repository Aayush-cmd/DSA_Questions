#include<iostream>
int getmax(int num[] , int size);
int getmin(int num [], int size);

int main()
{
    int size ;
    std::cin>>size;
    int num [10];                                               
    for(int i = 0 ;i<size;i++){
        std::cin>>num[i];                                       //taking input from user
    }
    std::cout<<"Maximum value is:"<<getmax(num,size)<<'\n';             
    std::cout<<"Minimum value is:"<<getmin(num,size)<<'\n';
}
int getmax(int num[] , int n)
{
    int max=INT_MIN;
    for(int i = 0 ;i<n;i++){
        if(num[i]>max){
            max  = num[i];
        }
    }
    return max;
}
int getmin(int num[] , int n)
{
    int min=INT_MAX;
    for(int i = 0 ;i<n;i++){
        if(num[i]<min){
            min  = num[i];
        }
    }
    return min;
}






//practise
#include<iostream>


int getMax(int num[],int size);
int getMin(int num[],int size);
int main()
{
    int size ;
    std::cin>>size;
    int num[10];
    for(int i = 0;i <size;i++){
        std::cout<<num[i]<<" ";
  }
  std::cout<<"Max value is: "<<getmax(num,size)<<'\n';
  std::cout<<"Min value is: "<<getmin(num,size)<<'\n';
  
}
int getMax(int num[],int size)
{
    int max = INT_MIN;
    for(int i = 0;i<size;i++){
        if(num[i]>max){
            max=num[i];
        }
    }
    return max;
}
int getMin(int num[],int size)
{
    int min = INT_MAX;
    for(int i = 0;i<size;i++){
        if(num[i]>min){
            min=num[i];
        }
    }
    return min;
}