#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    /*string str;
    getline(cin,str);//to input string with spaces
    string str1(5, 's'); //prints 's' 5 times
   
    cout<<str1<<endl;
    */

    /*different functions of string*/
//     string s1="fam";
//     string s2="ily";
//     string s3="sanika";
   
   
//     //to append
//     s1.append(s2);//any of these 2
//     s1=s1+s2;
//     cout<<s1<<endl;

//     //to clear
//     //s1.clear();

//     //to compare
//      cout<<s1.compare(s2)<<endl;

//     //to check whether string is empty
//     if (!s1.empty())
//     {
//         cout<<"string is not empty"<<endl;
//     }
    
//     //to erase
//     s3.erase(2,3);//2 is index from which we want to start deleting..3 is no. of elemts 
//     cout<<s3<<endl;

//     //to find
//     cout<<s3.find("nik")<<endl;  //returns 1st index ie index of n

//     //to insert
//     s3.insert(3,"vik"); //3 is index at which we want to insert vik
//     cout<<s3<<endl;

//     //to find length
//     cout<<s2.length()<<endl;

//     //substring
//     cout<<s3.substr(2,3)<<endl;//2 is index from which we want to start deleting..3 is no. of elemts 
    
//     //numeric string to integers
//     string s4 ="108";
//     int x= stoi(s4);
//     cout<< x+2<<endl;


//      //integer to string
//        int a=124;
//        cout<< to_string(a) + "2"<<endl;
  

//   //to start include algorithm header file
//    sort(s3.begin(), s3.end());
//    cout<<s3<<endl;

//    //to reverse
//    reverse(s3.begin(), s3.end());

string s1="wce";
cout<<"length is"<<s1.length()<<endl;
string s2=s1;
cout<<s2<<endl;
string s3="acses";
s1.append(s3);
cout<<"appended string is :";
cout<<s1<<endl;
int index=s1.find('w');
cout<<"index is :"<<index<<endl;
string sub=s1.substr(0,3);
cout<<"substring is :"<<sub<<endl;

string st="dcba";
sort(st.begin(),st.end());
cout<<"string after sorted :"<<st<<endl;
string rev="shweta";
reverse(rev.begin(),rev.end());
cout<<"reverse string :"<<rev<<endl;





string s="wce_acses@gmail.com";
int x=s.find("@");
string user=s.substr(0,x);
string domain=s.substr(x,s.length());
cout<<user<<endl;
cout<<domain<<endl;
if(s.find("gmail"))
    cout<<" email is on gmail"<<endl;
else
    cout<<" email is not on gmail"<<endl;

}