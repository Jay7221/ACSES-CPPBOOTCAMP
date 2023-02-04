#include <iostream>

using namespace std;
int main()
{
    // decaring a two dimentional array
    int arr[3][3];

    // taking input from the user
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "Data";
            cin >> arr[i][j];
            cout << endl;
        }
    }

    // printing the values on the console
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}