#include<iostream>
using namespace std;

void printsum(int arr[3][3],int row ,int col)
{
    cout<<"printing sum: "<<'\n'; 
     
     for(int row=0;row<3;row++){
        int sum =0; 
        for(int col=0;col<3;col++){
                  
            sum += arr[row][col];
        }
        cout<<sum<<" ";
     }
     cout<<'\n';
}


int largest_rowsum(int arr[][3],int row ,int col)
 {
      int maxi =INT_MIN;
      int rowIndex =-1;
    for(int row=0;row<3;row++){
        int sum=0;
        for(int col=0;col<3;col++){
            sum += arr[row][col];
        }

            if(maxi < sum)
            {
                maxi =sum ;
                rowIndex = row;
            }
        }
    cout<<"Largest row sum is : "<< maxi <<'\n';
    return rowIndex;


 }


int main()
{
    int arr[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>arr[i][j];
        }

    }

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<'\n';
        
    }
    printsum(arr,3,3);
    int ansIndex = largest_rowsum( arr, 3,3);
    cout<<"Largest row sum is at index: "<<ansIndex<<'\n';
    return 0;
    
}