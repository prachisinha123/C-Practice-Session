#include<iostream>
using namespace std;
int main()
{
int n,s;
cout<<"Enter the number of elements present in the array:"<<endl;
cin>>n;
int a[n];
cout<<"Enter the  elements in the array:"<<endl;
for(int i = 0;i<n;i++){
  cin>>a[i];
}
cout<<"Enter the value of s:"<<endl;
cin>>s;
int i = 0,j=0,st = -1,en=-1,sum = 0;
while(j<n && sum+a[j] <= s){
    sum += a[j];
    // sum = sum+a[j];
    // sum++;
    j++;
}
if(sum == s){
    cout << i+1 << " "<< j <<endl;
    return 0;
}
while(j<n){
    sum +=a[j];
    while(sum>s){
        sum -=a[i];
        i++;
    }
    if(sum == s){
        st = i+1;
        en = j+1;
        break;
    }
  j++;
}
cout<< st <<" " << en <<endl;;
    return 0;
}