// Print the left element:
// Given a array of length N, at each step it is reduced by 1 element. In the first step the maximum element would be removed, while in the second step minimum element of the remaining array would be removed, in the third step again the maximum and so on. Continue this till the array contains only 1 element. 
// And find the final element remaining in the array.
#include<iostream>
#include<algorithm>
using namespace std;
int leftElement(int n,int a[]){
   sort(a,a+n);
    if(n%2==0)
            return a[n/2-1];
        else
            return a[n/2];
}
int main()
{
    int n;
    cout<<"Enter the value of n:"<<endl;
    cin>>n;
    int a[n];
    cout<<"Enter the elements in array:"<<endl;
    for(int i = 0;i<n;i++){
        cin>>a[i];
    }
    cout<<"Last element of the array:"<<endl;
    cout<<leftElement(n,a);
    return 0;
}