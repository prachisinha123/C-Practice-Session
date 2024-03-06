// Rearrange the array in alternating positive and negative itms with o(1) extra space.
// Naïve Approach: To solve the problem follow the below idea:

// The problem can be easily solved if O(n) extra space is allowed.
// We can store the positive values and negative values in two separate data structures.
// We will start filling the original array with alternating negative and positive values in the same order 
// in which it appears in the original array.
#include<iostream>
using namespace std;
int printArray(int a[],int n ){
     int posArr[n];
     int negArr[n];
 int posIdx = 0;int negIdx = 0;
 for(int i = 0;i<n;i++){
    if(a[i]>=0)
    posArr[0] = a[i]; 
    posIdx++;
    else
    negArr[0] = a[i];
    negIdx++;
 }


}
int main(){
    int n;
    cout<<"Enter the value of n:"<<endl;
    cin>>n;
    int a[n];
    cout<<"Enter the value of elements present in the array:"<<endl;
    for(int i = 0;i<n;i++){
        cin>>a[i];
    }

    return 0;

}