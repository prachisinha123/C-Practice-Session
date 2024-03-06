// // Find common elements in 3 sorted element.
// // Given three Sorted arrays in non-decreasing order, print all common elements in these arrays.
#include<iostream>
using namespace std;
void cmnElemt(int a[],int b[],int c[],int n1, int n2,int n3){
    // Initializing starting indexex for a[] , b[] , c[].
  int i = 0, j = 0, k= 0;
  while(i < n1 && j < n2 && k < n3){
    // If x  = y and y = z, print any of them and move ahead in all array.
    if(a[i] == b[j] && b[j] == a[k]){
        cout << a[i] << " "; 
        i++;
        j++;
        k++;
    }
      // x<y
    else if (a[i]<b[j])
     i++;
    //  y<z  
      else if (b[j]<c[k])
      j++;
    // when x>y and z < y , i.e. , z is smallest , we move ahead in array c.
    else
    k++;
//    else if (a[i] < b[j] || a[i] < c[k]){
//      i++;
//    }else if (b[j] < a[i] || b[j] < c[k]){
//      j++;
//     }else{
//     k++;
//     }
  }
  
}
int main(){
    int n1,n2,n3;
    cout<<"Enter the value of n1:"<<endl;
    cin>>n1;
    int a[n1];
    cout<<"Enter the value of elements present in the array:"<<endl;
    for(int i = 0;i<n1;i++){
        cin>>a[i];
    }
    cout<<"Enter the value of n2:"<<endl;
    cin>>n2;
    int b[n2];
    cout<<"Enter the value of elements present in the array:"<<endl;
    for(int j = 0;j<n2;j++){
        cin>>b[j];
    }
     cout<<"Enter the value of n3:"<<endl;
    cin>>n3;
    int c[n3];
    cout<<"Enter the value of elements present in the array:"<<endl;
    for(int k = 0;k<n3;k++){
        cin>>c[k];
    }
    cout<<"Commom elements are:"<<endl; 
     cmnElemt(a,b,c,n1,n2,n3);
   return 0;  
}
