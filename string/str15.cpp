// This will not work,now this is working
#include<iostream>
#include<string>
using namespace std;
string toReverse(string s){
    int n = s.size();
        for(int i = 0;i<n/2;i++){
         for(int j = n-1; j>=n/2;j--){
            int temp;
            temp = s[i];
            s[i] = s[j];
            s[j] = temp;
            i++;
         }
        }
         return s;
}
int main(){
    string s;
   cout<<"Enter the string:"<<endl;
   cin>>s;
   cout<<"String after reverse:"<<endl;
   cout<< toReverse(s) <<endl;
    return 0;
}