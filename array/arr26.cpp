// Print the left element::
// Given a array of length N, at each step it is reduced by 1 element. In the first step the maximum element would be removed,
//  while in the second step minimum element of the remaining array would be removed, in the third step again the maximum and so on. Continue this till the array contains only 1 element. 
// And find the final element remaining in the array.
#include<iostream>
using namespace std;
int leftElement(int a[],int n){
    // Selection sort: 
    for(int i = 0;i<n-1;i++){
   for(int j = i+1;j<n;j++){
     if(a[j]<a[i]){
        int temp = a[j];
        a[j] = a[i];
        a[i] = temp;
     }
   }
    }
 if(n%2==0)
            return a[n/2-1];
        else
            return a[n/2];


 }

int main()
{
    int n;
    cout<<"Enter the number of element present in the array:"<<endl;
    cin>>n;
    cout<<"Enter the elements in the array:"<<endl;
    int a[n];
    for(int i = 0;i<n;i++){
        cin>>a[i];
    }

    cout << leftElement(a, n) << endl;
  
    return 0;
}
 