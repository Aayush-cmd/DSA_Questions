#include<iostream>

bool isPowerOfTwo(int n);
int main ()
{ 
    int n=0;
    int ans =1;

 std::cout<<"Enter a number"<<'\n';
 std::cin>>n;
  isPowerOfTwo(n);
 

}


bool isPowerOfTwo(int n) {
    int i;
        int ans = 1;
        for( i =0 ; i<=30 ; i++){
            std::cout<<"Answer is "<< ans <<'\n';
            
            if(ans==n){
                return true ;
            }  
            if(ans<INT_MAX/2){
                ans=ans*2;
            }
            
             
            
        }
        return  false;
         
        
    }  

















