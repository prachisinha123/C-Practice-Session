// Display longest name:Given a list of names,display the longest name.
#include<iostream>
using namespace std;
int main()
{   
int n;
cout<<"Enter the no of elements in the array:"<<endl;
cin>>n;v 
int name[n];
cout<<"Enter the element in the array:"<<endl;
for(int i = 0;i<n;i++){
    cin>>name[i];
}
cout<<"The array:"<<endl;
for(int i = 0;i<n;i++){
    cout<<name[i];
}
    return 0;
}