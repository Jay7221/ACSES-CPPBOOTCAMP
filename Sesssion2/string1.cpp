#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    /*char a[] = {'a', 'c', 's', 'e', 's', '\0'};
    cout << a << endl;
    string s;
    s = "acses";
    cout << s;*/
    string s;
    // cout << "enter your string:" << endl;
    /*cin >> s;
    cout << "my string is :" << s << endl;*/
    /*getline(cin, s);
    cout << "my string is:" << s << endl;*/
    string s1 = "wce";
    string s2 = "acses";
    cout << "length of string 1:" << s1.length() << endl;
    cout << "length of string 2 :" << s2.length() << endl;
    string s3;
    s3 = s2;
    cout << "copied string s3 is :" << s3 << endl;
    string s4;
    // s4= s1.append(s2);
    s4 = s1 + s2;
    cout << "apppended string s4 is :" << s4 << endl;
    int index;
    index = s1.find('c');
    cout << "index of character c in string s1 is :" << index << endl;
    string sub = "c++ bootcamp";
    string substring = sub.substr(0, 3);
    cout << "my substring is :" << substring << endl;
    string s8 = "dcsae";
    cout << "string s8 before sorting :" << s8 << endl;
    sort(s8.begin(), s8.end());
    cout << "string s8 after sorting :" << s8 << endl;
    string s9 = "computer";
    reverse(s9.begin(), s9.end());
    cout << "string s8 after reverse is:" << s9 << endl;

    return 0;
}
