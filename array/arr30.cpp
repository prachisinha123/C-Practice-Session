#include<iostream>
#include<climits>
using namespace std;
int main()
{
   int n;
   cout<<"Enter the no of elements present in the array:"<<endl; 
   cin >> n;
   int a[n];
   cout<<"Enter the elements in the array:"<<endl;
   for(int i = 0;i<n;i++){
   cin>>a[i];
   }
   const int N = 1e6+2;
//    1e6 means 10 to the power 6,we declare const keyword,such that there is no change in this.
   int idx[N];
//    Here we are declaring the idx array,and we initialize our array with -1,
for(int i = 0;i<N;i++){
    idx[i] = -1;
}
// Now we have to declare min-index,and initialise it with a big value,
int minidx = INT_MAX;
for(int i = 0;i<n;i++)
{
 if(idx[a[i]] != -1)
 { 
    minidx = min(minidx,idx[a[i]]);
 }
 else{
    idx[a[i]] = i;
 }
}
 if(minidx = INT_MAX)  {
   cout << "-1" <<endl;
 }
 else {
    cout << minidx+1 <<endl;
 }

    return 0;

}