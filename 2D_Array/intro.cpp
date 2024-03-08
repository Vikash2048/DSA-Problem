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

void row_wise_sum(int arr[][3], int row, int col)
{
    for (int i = 0; i < col; i++)
    {
        int sum = 0;
        for (int j = 0; j < row; j++)
        {
            sum += arr[i][j];
        }
        cout << sum << " ";
    }
}

int largest_row_sum(int arr[][3], int row, int col)
{
    int largest = -1;
    for (int i = 0; i < col; i++)
    {
        int sum = 0;
        for (int j = 0; j < row; j++)
        {
            sum += arr[i][j];
        }
        if (sum > largest)
            largest = sum;
    }
    return largest;
}

void print_like_wave(int arr[][3], int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        if (i % 2 == 0)
        {
            for (int j = 0; j < col; j++)
            {
                cout << arr[j][i] << " ";
            }
        }
        else
        {
            for (int j = col - 1; j >= 0; j--)
            {
                cout << arr[j][i] << " ";
            }
        }
    }
}

int main()
{

    int arr[][3] = {{1, 11, 111}, {2, 22, 222}, {3, 33, 333}};

    int row = 3;
    int col = 3;

    cout << "Printing arr :" << endl;
    printArray(arr, row, col);

    cout << endl
         << "print row wise sum : " << endl;
    row_wise_sum(arr, row, col);

    cout << endl
         << "Printing largest row sum : " << largest_row_sum(arr, row, col);

    cout << endl
         << "Printing like a wave:" << endl;
    print_like_wave(arr, row, col);
    return 0;
}