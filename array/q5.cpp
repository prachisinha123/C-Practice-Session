// Move all the negative elements to one side of the array.
#include<iostream>
using namespace std;
void sort_array(int A[],int n)
{
    int i = -1,pivot = 0 , j = 0; 
    // We are going to run a loop
    for( int j=0;j<n;j++)
    {
        if(A[j] < pivot){
            i++;
            // Swap logic: 
             int temp = A[i];
            A[i] = A[j];
            A[j] = temp;
        }  
       
    }

}
int main()
{
    int i,A[100],n;
    cout<<"Enter the number of elements present in the array"<<endl;
    cin>>n;
    cout<<"Enter array:"<<endl;
    for( i = 0; i<n; i++){
        cin>>A[i];
    }
    cout<<"Array after sorting:\n"<<endl;
      sort_array(A,n);

    for(i = 0;i<n;i++){
    cout<<A[i]<<endl;
   }
   return 0;


}
 


