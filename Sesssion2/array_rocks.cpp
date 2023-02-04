#include <iostream>
using namespace std;
int main()
{
    int marks[5]; // array declaration

    // marks[0] = 23;
    // marks[1] = 24;
    // marks[2] = 25;
    // marks[3] = 26;
    // marks[4] = 27;

    // lets take input from user
    cout << "\nEnter marks :";
    for (int i = 0; i < 5; i++)
        cin >> marks[i];

    cout << marks[0] << " " << marks[1] << endl;

    // using for loop to traverse through the array

    return 0;
}