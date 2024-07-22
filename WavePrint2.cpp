#include<iostream>
#include<vector>
using namespace std;

vector<int> wavePrint(vector<vector<int>> arr, int Rows,int Cols)
{
    vector<int> ansIndex;

    for(int col =0; col<Cols;col++)
    {
        if(col&1)
        {
            for(int row =Rows-1;row>=0;row--)
            {
                ansIndex.push_back(arr[row][col]);
            }

        }
        else{
             for(int row =0;row<Rows-1;row++)
            {
                ansIndex.push_back(arr[row][col]);
            }

        }
    }
    return ansIndex;
}

int main()
{ int rows , cols;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << wavePrint[i][j] << " ";
        }
        cout << endl;
    }
}