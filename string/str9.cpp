// 2)From the biggest number from the numeric string
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
for(int i = 0;i<s.size()-1;i++){
   for(int j = i+1;j<s.size();j++){
     if(s[i]<s[j]){
        int temp = s[i];
        s[i] = s[j];
        s[j] = temp;
     }
   }
}
cout<<"String after sorting:"<<endl;
cout<<s<<endl;
cout<<"This sorted string in descending order is the biggest number formed out of the string"<<endl;


// for(int i = 0;i<s.size(),i++){
//     cout<<s;
// }
// sort(i,n,s);
//  string s = "6529866071";
//  sort(s.begin(),s.end(),greater<int>());
//  cout << s <<endl;
    return 0;
}