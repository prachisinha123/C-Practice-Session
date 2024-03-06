// Check if strings are rotations of each other or not
// Given two strings s1 and s2. The task is to check if s2 is a rotated version of the string s1. The characters in the strings are in lowercase.+
#include<iostream>
#include<string>
using namespace std;
 bool areRotations(string s1,string s2){
   int m = s1.size();
   int n = s2.size();
   if(m==n){
    if(s1.compare(s2)==0){
        return true;
    }
    int partition = 1;
    for(int i = partition;i<m;i++){
        string p = s1.substr(0,partition);
        string val = s1.substr(partition,m);
        val = val+p;
        if(val.compare(s2)==0){
            return true;
        }
        partition++;
    }
    return false;
   }
   else
   return false;
 }
int main(){
  string s1,s2;
  cout<<"Enter the 1st stirng:"<<endl;
  cin>>s1;
  cout<<"Enter the 2nd string:"<<endl;
  cin>>s2;
  cout<<areRotations(s1,s2);
    return 0;
}