// Implement strstr:
// Your task is to implement the function strstr. The function takes two strings as arguments (s,x) and  locates the occurrence of the string x in the string s. The function returns and integer denoting the first occurrence of the string x in s (0 based indexing).
#include<iostream>
using namespace std;
int strstr(string s, string x){
  int lenS=s.size();
  int lenX=x.size();
  int flag;
   for(int i = 0;i<lenS;i++){
    if(s[i] == x[0]){
      flag = 0;
    for(int j = 0;j<lenX;j++){
      if(s[i+j] != x[j]){
        flag = 1; 
        break;
      }
    }
    if(flag == 0){
      return i;
    }    
    }
   }

return -1;
}

int main(){
    string s,x;
    cout<<"Enter the main string:"<<endl;
    cin>>s;
    cout<<"Enter the 2nd string:"<<endl;
    cin>>x;
    cout<<strstr(s,x);
    return 0;
}