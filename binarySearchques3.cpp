#include<iostream>                                        //to find the lowest element in  a array.
int pivotElement(int arr[],int n)
{
    int s = 0;
    int e = n - 1;
    int mid = s+(e-s)/2;

    while(s<e){
        if(arr[mid]>=arr[0]){
            s = mid + 1;

        }
        else{
            e=mid;
        }
       mid = s+(e-s)/2;
                         
    }
    return s;                               //you can also return e it is the same. 
}
int main()
{
    int arr[6]={19,20,21,1,2,3};

    std::cout<<"index of the pivot element is : "<<pivotElement( arr,5);
}