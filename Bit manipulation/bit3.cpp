// Clear bit:It means,we have to clear the bit of that position,that it to do it 0.
#include<iostream>
using namespace std;
int clearBit(int n,int pos){
   int mask = ~(1<<pos);
//    return (n & mask);
   int res = n & mask;
   return res;

}
int main()
{
    int pos,n;
    cout<<"Enter the number:"<<endl;
    cin>>n;
    cout<<"Enter the position:"<<endl;
    cin>>pos;
    cout<<clearBit(n,pos)<<endl;
    return 0; 
}