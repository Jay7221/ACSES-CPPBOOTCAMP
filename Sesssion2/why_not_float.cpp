#include <iostream>
using namespace std;

int main()
{
    // array of float types
    int arr[5];
    float array2[20]; // here n =5

    for (int i = 0; i < 20; i++)
    {
        cout << "\nValue :";
        cin >> array2[i];
    }

    // print the values
    for (int i = 0; i < 5; i++)
    {
        cout << " " << array2[i];
    }

    return 0;
}