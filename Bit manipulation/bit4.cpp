// Update Bit
#include<iostream>
using namespace std;
int updateBit(int n,int pos,int value){
    // Clear bit:
    int mask = ~(1<<pos);
    n = n & mask;
    // here our n value changes in n = that value is stored in which we clear the bit at the position.
    // Set bit:   
     
}
int main()
{
    cout<<"Enter the number:"<<endl;
    cin>>n;
    cout<<"Enter the position:"<<endl;
    cin>>pos;
    cout<<updateBit(n,pos);

    return 0;

}