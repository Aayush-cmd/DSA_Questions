#include<iostream>              //to merge two sorted arrays .

void mergearray(int arr1[],int n,int arr2[],int m ,int arr3[])
{
 int i=0,j=0,k=0;                             // starting elements of arr(1,2,3).

 while(i<n && j<m)                            //1stloop [i,n] = starting and ending elements of arr1 and [j,m] are starting and ending elements of arr2
 {
    if(arr1[i] < arr2[j] )
    {
         arr3[k] = arr1[i];
         k++;
         i++;
    }
    else if(arr2[j] < arr1[i] )
    {
        arr3[k] = arr2[j];
        k++;
        j++;
    }

 }

 while(i<n)                                           //to copy all elements of first array to arr3
 {
    arr3[k] = arr1[i];
    k++;
    i++;
 }
  while(j<m)                                          //to copy all elements of second array to arr3
 {
 {
    arr3[k] = arr2[j];
    k++;
    j++;
 }
}
}

void printarray(int ans[],int n){           
    for(int i=0;i<n;i++)
    {
        std::cout<<ans[i]<< " ";
    }
}

int main()
{
    int arr1[5]={1,3,5,7,8};
    int arr2[3]={2,4,6};
    int arr3[8]={};

    mergearray( arr1, 5, arr2, 3, arr3);
    std::cout<<"Merged array : ";
    printarray( arr3, 8);
    

}          























