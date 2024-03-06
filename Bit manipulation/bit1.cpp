// Get Bit
#include<iostream>
using namespace std;
// Here we are making a function which we are passing the two parameters one is number and other is positin 
int getBit(int n,int pos)
{
    if((n &(1<<pos))!=0)
    return 1;
    else
    return 0;   

    
}
int main(){
//  cout<<getBit(5,2)<<endl;
 int pos,n;
    cout<<"Enter the number n:"<<endl;
    cin>>n;
    cout<<"Enter the position:"<<endl;
    cin>>pos;
     cout<<getBit(n,pos)<<endl;
    return 0;
}