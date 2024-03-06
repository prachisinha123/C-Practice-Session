// Java Strings
// Given two strings S1 and S2 as input. Your task is to concatenate two strings and then reverse the string. Finally print the reversed string.
 #include<iostream>
 #include<string>
 using namespace std;
 string conRevstr(string s1, string s2){
        s1.append(s2);
        int n = s1.size();
        for(int i = 0;i<n/2;i++){
            int temp;
            temp = s1[i];
            s1[i] = s1[n-1-i];
            s1[n-1-i] = temp;
        }
    
    return s1;
 }
 int main(){
    string s1,s2;
    cout<<"Enter the string:"<<endl;
    cin>>s1;
    cout<<"Enter the string:"<<endl;
    cin>>s2;
    cout<<conRevstr(s1,s2);
    return 0;
 }