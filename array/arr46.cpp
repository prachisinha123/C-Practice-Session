// Check pallindrome:check whether a given word is  a pallindrome or not.
// How to check;
// If our 1st and last character is equal then move further,again if 2nd character and 2nd last character
// are equal then move further,if not then return "it is not a pallindrone"
#include<iostream>
using namespace std;
int main(){ 
    int n;
    cout<<"Enter the no of elements present in the array:"<<endl;
    cin>>n;
    char arr[n+1];
    cout<<"Enter the elements in the character"<<endl;
    cin>>arr;
    // Here we are making a variable called check,and initially we consider it as true,we assume that
    // at initiall it is true 
    bool check = 1;
    for(int i = 0;i<n;i++){ 
        if(arr[i] != arr[n-1-i])  {
            check = 0; 
            break;
        }

    }
    if(check == true){
        cout<<"word is a pallindrome"<<endl;
    }
    else{
        cout<<"word is not a pallindrome"<<endl;
    }
    return 0;
} 