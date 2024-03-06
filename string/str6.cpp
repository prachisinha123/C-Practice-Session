// To Sort the string:To use thr in-built sort function,we have to include the headerfile,which is called 
// algorithm headerfile.
#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
     string s1 = "xcmnmvzcxmfas";
    // Sort() function:
     sort(s1.begin(), s1.end());
     cout<<s1<<endl;
    return 0;
}