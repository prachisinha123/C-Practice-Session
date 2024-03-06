// Find the union and intersection of the two sorted array
#include<iostream>
using namespace std;
// Function prints union of arrays ,A[] and B[]
// m is the number of elements in array A[];
// n is the number of elements in array B[];
void union_array(int A[],int B[],int m,int n)
{
    int i = 0,j = 0;
    // This while loop will be running until one of the array will be exausted.
    while(i<m && j<n){
        if( A[i] < B[j])
        // Here we are using post-increment,that is at first it will print and then imcrement.
        cout<< A[i++]<<endl;
        else if (B[j] < A[i])
        cout<< B[j++]<<endl; 
        else{
            cout<< B[j++]<<endl; 
            i++;
            // here we are incrementing the index value i and j,
            
        }
        // Till here one of the array got exhausted,now we come out of the loop condition
        //Now we are using another loop condition 
    }
    // Printing remaining element of the largest aray
      while(i<m)
        cout<<A[i++]<<endl;
      while(j<n)
        cout<<B[j++]<<endl;
    }
    int main()
    {
         int i,j,A[100], B[100],m,n;
        cout<<"Enter the number of elements present in the array A"<<endl;
        cin>>m;
        cout<<"Enter the array A:"<<endl;
        for( i = 0; i<m; i++){
        cin>>A[i];
        }
         cout<<"Enter the number of elements present in the array B"<<endl;
        cin>>n;
        cout<<"Enter the  array B:"<<endl;
        for( j = 0; j<n; j++){
        cin>>B[j];
        }
        
        // Here we are calling  the function.
        // cout<<"Union of the array"<<endl;
         cout<<"Array after taking the union of array A and B stored in array C"<<endl;
         union_array(A,B,m,n);
         return 0;

    }

    