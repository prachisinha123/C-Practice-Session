// Problem:You are given an arr[] of N integers including 0.The task is to find the smallest positive 
// number missing from the array.
#include<iostream>
using namespace std;
int main()
{
   int n;
   cout<<"Enter the number of elements present in the array;"<<endl;
   cin>>n;
   int a[n]; 
   cout<<"Enter the elements in the array:"<<endl;
   for(int i = 0;i<n;i++){
       cin>> a[i];
   }
//   here we are decalaring an array of big size = (10 to the power 6+2) that is (1e6+2) 
   const int N = 1e6 + 2;
//    boolean type array;name of the array:check; 
   bool check[N];
   for(int i = 0;i<N;i++){
    check[i] = 0;
    // Here we can use 0/false
    }
    for(int i = 0;i<n; i++){
        if(a[i] >= 0)
        {
            check[a[i]] = 1;
            // Here we can use 1/true
        }
    }
    int ans = -1;
    for(int i = 1;i<N;i++){
        if(check[i] == false){
            ans = i;
            break;
        }
    }
    cout << ans <<endl;
    return 0;
}