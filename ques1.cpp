#include <iostream>           //to subtract product and sum of a number
int subtractproductandsum(int n);

int main(){
    int n=1;
    std::cout<<"Enter a number\n";
    std::cin>>n;
    subtractproductandsum(n);
}
    int subtractproductandsum(int n)
    {
    
    int prod=1;
    int sum=0;
   
    while(n!=0){
        int digit = n%10;

        prod = prod*digit;
        sum=sum+digit;
        n=n/10;
    }

    int answer = prod-sum;
    std::cout<<"Answer is "<<answer<<'\n';
    return answer;

}

