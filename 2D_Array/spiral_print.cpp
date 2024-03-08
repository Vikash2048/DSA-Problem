#include <bits/stdc++.h>
using namespace std;

void printArray(int arr[][3], int row, int col)
{
    for (int i = 0; i < col; i++)
    {
        for (int j = 0; j < row; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

vector<int> spiral_print(int arr[][3], int row, int col)
{
    vector<int> ans;
    int count = 0;
    int total = row * col;

    int sCol = 0;
    int sRow = 0;
    int eRow = row - 1;
    int eCol = col - 1;

    while (count < total)
    {

        for (int i = sCol; i <= eCol; i++)
        {
            ans.push_back(arr[sRow][i]);
            count++;
        }

        sRow++;

        for (int i = sRow; i <= eRow; i++)
        {
            ans.push_back(arr[i][eCol]);
            count++;
        }

        eCol--;

        for (int i = eCol; i >= sCol; i--)
        {
            ans.push_back(arr[eRow][i]);
            count++;
        }

        eRow--;

        for (int i = eRow; i >= sRow; i--)
        {
            ans.push_back(arr[i][sCol]);
            count++;
        }

        sCol++;
    }

    return ans;
}

int main()
{
    int arr[][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int row = 3;
    int col = 3;

    cout << "array print: " << endl;
    printArray(arr, row, col);

    cout << endl
         << "spiral print " << endl;

    vector<int> spiralArr = spiral_print(arr, row, col);

    for(int i = 0; i<spiralArr.size(); i++){
        cout <<spiralArr[i] << " ";
    }

    return 0;
}