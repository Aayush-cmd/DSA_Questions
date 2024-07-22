#include<iostream>
using namespace std;


void wavePrint(int arr[][3],int nrows ,int mcolm)
{
   for(int col =0; col <mcolm;col++)
   {
    if(col & 1)
    {
        for(int row= nrows-1; row>=0;row--){
            cout<<arr[row][col]<<" ";
        }
        cout<<'\n';
    }
    else{
        for(int row=0;row<nrows;row++)
        {
            cout<<arr[row][col]<<" ";
        }
        cout<<'\n';

        }
   }
}
    void print(int arr[][3] , int size)
    {
        for(int i=0;i<size;i++)
        {
            cout<<arr<< " ";
        }
        cout<<'\n';
    }

int main()
{
    int arr[3][3];
    cin>>arr[3][3];

    wavePrint(arr,3,3);
    print(arr,9);


}