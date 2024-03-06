// Array challenges:
#include<iostream>
#include<climits>
using namespace std;
int main()
{
    // int mx = -19999999,n;
    int mx = INT_MIN,n;

    cout<<"Enter the number of elements present in the array:"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array:"<<endl;
     for(int i = 0;i<n;i++){
        cin>>arr[i];
     }
     for(int i = 0;i<n;i++){
        mx = max(mx,arr[i]);
        cout<<mx<<endl;
     }
        return 0;
}
