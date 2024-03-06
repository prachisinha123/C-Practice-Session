// Set Bit:It means we have to set the bit = 1,at that position
#include<iostream>
using namespace std;
int setBit(int n,int pos){
    int res =  n | (1<<pos);
    return res;
    // return ( n | (1<<pos));
    // Here we are returning this,(n|(1<<pos)


}
int main(){
    int pos,n;
    cout<<"Enter the number n:"<<endl;
    cin>>n;
    cout<<"Enter the position:"<<endl;
    cin>>pos;
    cout<<setBit(n,pos)<<endl;
    return 0; 
}