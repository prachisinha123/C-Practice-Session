#include<iostream>
using namespace std;
int main()
{
    // 1st method to declaration of array:
    // int array[4];
    // array[0] = 10;
    // array[1] = 20; 
    // 2nd method to declaration of array:
    // int array[4] = {10,20,30,40};
    // cout<<array[3]<<endl;
    //  3rd method to declare an array:to take input from users;
    int n,i;
     
    
    cout<<"The number of elements in the array:"<<endl;
    cin>>n;
    int array[n];
  
    cout<<"Enter the elements of the array:"<<endl;
    for(i = 0; i<n ;i++){
          cin>>array[i];
    } 

    cout<<"The array is:"<<endl;
    for(i=0;i<n;i++){
        cout<<array[i];
    }


// int n;
// cout<<"Enter the value of n:"<<endl;
// cin>>n;
// int array[n];
// for(int i = 0;i<n;i++){
//   cin>>array[i];
// }
// for(int i = 0;i<n;i++){
//   cout<<array[i];
// }
 return 0;


}
/*
Array:It is a data-structure to store the list of the variables of similar type.
Syntax: datatype arrayName[size];
  eg,int array[4] = {10,20,30,40};
Int variable uses 4 bytes, so size of above array having 4 integer value = 4*4 =16

Indexing of array:by default it starts from 0,so in the above example,a[0] = 10,a[1] = 20, a[2] = 30, 

*/


