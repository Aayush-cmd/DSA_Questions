#include<iostream>                  //to find sqrt of any number with decimal places ..
int sqrtInt(int num)
{
    int s =0;
    int e =num;
    int mid=(s+e)/2;
    int ans;

    while(s<=e){
        int square=mid*mid;
        if(square==num)
        {
            return mid;
        }
        else if(square<num)
        {
            ans=mid;
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid=(s+e)/2;
    }
    return ans;
}
double Precision(int num ,int  precision,int tempsoln)
{
    double factor =1;
    double ans= tempsoln;
    for(int i=0;i<precision;i++){
        factor =factor/10;
        for(double j=ans;j*j<num;j=j+factor)
        {
            ans=j;

        }
    }
    return ans;
   

}

int main()
{
    int num;
    std::cout<<"Enter the number you want to find the square root :\n";
    std::cin>>num;

    int tempsoln=sqrtInt(num);
    std::cout<<"The square root upto 3 decimal point is: "<< Precision( num , 7, tempsoln);
    return 0;
}