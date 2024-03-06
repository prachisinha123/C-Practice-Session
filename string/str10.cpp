//Shortcut: To form the biggest number from the numeric string
// We use an in-built function sort ()
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    string s;
    cout<<"Enter the string"<<endl;
    cin >> s;
    cout<<"The string is"<<endl;
    cout << s<<endl;
    cout<<"The largest number is:"<<endl;
    sort(s.begin(),s.end(), greater<int>());
    cout<< s <<endl;



    return 0;
}