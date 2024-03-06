// Minimise the maximum difference between heights 
#include<iostream>
using namespace std;
int sort(int a[],int n){ 
for(int i = 0;i<sizeof(a);i++)
 for(int j = i+1;j<sizeof(a);j++)
 {
    if(a[i] > a[j])
        {
            //  Swap logic:
            int temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }
 }

}
//  Function:
int getMinDiff(int a[],int n,int k)                       
   { // At first sort the array.
   sort(a,n);
   
   int ans = a[n-1]-a[0];
   int smallest = a[0]+k;
   int largest = a[n-1]-k;
   int mi,ma;

for(int i = 0;i<n-1;i++){
    mi = min(smallest,a[i+1]-k);
    ma  = max(largest,a[i]+k);
    if(mi<0) continue;
    ans = min(ans,ma-mi);
}
return ans;
}  
// Driver code:
int main()
{
int a[100],n,i;
int k = 6;
cout<<"Enter the no of  element present in array" <<endl;
cin>>n;
cout<<"The given array is:"<<endl;
  for(i = 0;i<n;i++){
     cin>>a[i];
  }
  cout<<"The minimun difference between height:"<<endl;
//   Function call
   int ans = getMinDiff(a,n,k) ;
   cout<<ans;
    return 0;
}

// Not solved.............!!!!!!!!!
    

