// Different function of strings:
#include<iostream>
#include<string>
using namespace std;
int main(){
// string s1 = "fam";
// string s2 = "ily";
// 1)Append:Addition of string 
// 1st :Here we append string s2 into s1:
// s1.append(s2);
// cout<< s1 <<endl;
// 2nd:s1 + s2,without using append function:
// cout<< s1+s2 <<endl;
// How to access the string:Like an array(0_base indexing) 
// string s1 = "fam";
// string s2 = "ily";
//     cout << s1[1] <<endl;
// Clear function:It clears the string completely.
// string abc = "sbhsbhsajsnsjnsjn  hbhasbhsj asd";
// abc.clear();
// cout<< abc;
// Comparasion of two string: Here we are comparing s2 with s1 with argument (s1).
//  string s1 = "abc";
//  string s2 = "xyz";
//  cout<< s2.compare(s1) <<endl;

//   string s1 = "abc";
//  string s2 = "abc";
//  cout<< s2.compare(s1) <<endl;
//  string s1 = "xyz";
//  string s2 = "abc";
//  cout<< s2.compare(s1) <<endl;
//  s1.clear();
//  if(!s1.empty())
//    cout<< "Given string is empty" << endl;
// Erase Method:
// cout<<"String before erasing:"<<endl;
//  string s1 = "mnnnjuuiooougop";
//  cout<<s1 <<endl;
//  s1.erase(2,5);
//  cout<<"String after erasing:  " <<endl;
//  cout << s1 <<endl;
// 2)Erase the string from the passing parametres:
// cout<<"String before erasing:"<<endl;
// string s1 = "mnnnjuuiooougop";
// cout<<s1 <<endl;
// s1.erase(2);
// cout<<"String after erasing: "<<endl;
// cout<< s1 <<endl;
// 3)Full Erase:Erase the full string:
// cout<<"String before erasing:"<<endl;
// string s1 = "mnnnjuuiooougop";
// cout<<s1 <<endl;
// s1.erase();
// cout<<"String after erasing: "<<endl;
// cout<< s1 <<endl;
// 4. Syntax 4: Erase the single character at iterator position pos. 
    // cout<<"String before erasing:"<<endl;
    // string s1 = "mnnnjuuiooougop";
    //  cout<<s1 <<endl;
    //  s1.erase(s1.begin() + 4);
    //  cout<<"String after erasing: "<<endl;
    //  cout<< s1 <<endl;
// 5. Syntax 5: Erase characters from iterator pos. to another iterator pos. 
//  cout<<"String before erasing:"<<endl;
//     string s1 = "mnnnjuuiooougop";
//      cout<<s1 <<endl;
//      s1.erase(s1.begin() + 0,s1.end()-6);
//      cout<<"String after erasing: "<<endl;
//      cout<< s1 <<endl;
// Find function:
// cout<<"String is:"<<endl;
//     string s1 = "nivcoopnnmmmm";
//     cout<< s1.find("nn") <<endl;
// Insert function:
// cout<<"String is :"<<endl;
//     string s1 = "prachi";
//     s1.insert(2,"sinha"); 
//     cout<< s1 <<endl;
     
    // How to find the length of the string:
    // cout<<"String is:" <<endl;
    // string s = "prachi";
    // cout <<s.size() <<endl;
    // string s1 = "sinha";
    // cout<< s1.size() <<endl;
    // 4. size of string object Using for loop
    // cout<<"String is :"<<endl;
    // string s2 = "prachi";
    // for(int i = 0;i<s2[i];i++)
    //  cout << i << endl ;
    //   4. size of string object Using while loop
    // Traversal of string:
    string str = "prachi";
    for(int i = 0; i<str.length();i++)
    {
        cout<<str[i] <<endl; 
    }
    return 0;

}