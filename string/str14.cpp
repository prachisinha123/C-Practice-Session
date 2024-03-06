// Reverse Function: By making function to reverse() itself.
#include<iostream>
#include<string>
using namespace std;
string toReverse(string s){
    int n = s.size();
        for(int i = 0;i<n/2;i++){
         int temp;
         temp = s[i];
         s[i] = s[n-1-i];
         s[n-1-i] = temp;
    }
//   cout<<s<<endl;

return s;
}
int main(){
    string s;
   cout<<"Enter the string:"<<endl;
   cin>>s;
   cout<<"String after reverse:"<<endl;
   cout<< toReverse(s) <<endl;
// toReverse(s);
    return 0;
}