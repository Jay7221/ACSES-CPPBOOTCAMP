#include <iostream>
using namespace std;
// calculating transpose of matrix
int main()
{

    int arr[3][3]; // declare 2D array

    // taking input from user
    cout << "\nEnter 9 numbers\n";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
        }
    }

    // display the matrix
    cout << "\nOriginal matrix\n";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    int trans[3][3]; // declare transpose matrix

    // taking transpose
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            trans[i][j] = arr[j][i];
        }
    }

    // display the matrix
    cout << "\nTranspose matrix\n";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << trans[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}