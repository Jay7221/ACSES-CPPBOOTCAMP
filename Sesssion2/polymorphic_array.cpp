/*
---------------ARRAY DECLARATION TYPES------------------
*/

#include <iostream>

using namespace std;
int main()
{
    // int a1[5]; // first way of declaring --> taking memory of 5 * 4 = 20 bytes

    // int a2[] = {1, 2, 3, 4}; // second way of declaring array

    // for (int j = 0; j < 4; j++)
    // {
    //     cout << a2[j] << " ";
    // }
    // cout << endl;
    // int a3[5] = {0}; // third way of declaring an array
    // cout << a3[0] << " " << a3[1] << endl;

    int a4[5] = {1, 2}; // 4th way of declaration
    int k = 0;
    while (k < 5)
    {
        cout << a4[k] << " ";
        k++;
    }

    /*
    ARRAY PROPERTIES :
    1.HAVE SIMILAR DATA TYPE ELEMENTS
    2.STORED AT CONTINUOUS MEMORY LOCATIONS
    3WE CAN DECLARE ARRAY OF ANY SIZE

    */
    return 0;
}