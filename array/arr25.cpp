// Smaller and Larger: 
// Given a sorted array Arr of size N and a value X, find the number of array elements less than or equal to X and elements more than or equal to X. 
#include<iostream>
using namespace std;
int * getMoreAndLess(int a[], int n, int x)
{
    int count1 = 0;
    int count2 = 0;
    static int ans[2];
    for(int i = 0;i<n;i++){
        
          if(a[i]<=x)
          count1++; 
          ans[0] = count1;
    
      if(a[i] >x)
        count2++;
        ans[1] = count2;
       
    }
    // cout << count1 <<" "; 
    //  cout<<count2;
    return ans;
    

}
int main()
{
 int n,x;
 cout<<"Enter the numbers of element present in the array:"<<endl;
 cin >> n;
 int a[n];
 cout<<"Enter the elements of the array:"<<endl;
 for(int i = 0;i<n;i++){
    cin>>a[i];
 }
 cout<<"Enter the key value:"<<endl;
 cin>>x;
  getMoreAndLess( a,n,x);
    return 0;
}