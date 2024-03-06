// Total subarray in the circular array:
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number of elements present in the array:"<<endl;
    cin>>n;
    int a[n];
    cout<<"Enter the elements in the array:"<<endl;
    for(int i = 0; i<n; i++) {
        cin>>a[i];
    }
    for(int i = 0; i < n; i++) {
        // cout << i;
        // cout << endl;
        for(int j = i+1; j < n+i+1; j++) {
            for(int k = i; k < j ; k++) {
                cout <<  a[k % n] <<" "; 
            }
            cout << endl;
        }    
    }


    return 0;
}