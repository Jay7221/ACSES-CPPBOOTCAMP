/*
--------------SEQUENTIAL SEARCH PROGRAM--------------
*/

#include <iostream>
using namespace std;

int main()
{
    int array[10]; // array declaration

    // taking input from the user
    for (int i = 0; i < 10; i++)
    {
        cout << "\nValue :";
        cin >> array[i];
    }

    // printing the array
    for (int j = 0; j < 10; j++)
        cout << array[j] << " ";

    int key; // value to be searched
    cout << "\nEnter value to be searched :";
    cin >> key;

    int m = 0;
    for (; m < 10; m++)
    {
        if (array[m] == key)
        {
            break;
        }
    }

    if (m == 10)
        cout << "\nElement not found!" << endl;
    else
        cout << "\nElement found at position " << m << endl;
    return 0;
}