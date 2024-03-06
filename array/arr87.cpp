// Given two array  a and b. Write a function comp(a,b) (orCompSame(a,b)) 
// that checks whether the two arrays
// have the "same" elements, with the same multiplicities( the multilpicity of a 
// member is the number of times it appears).
// "Same" means, here that the element in 'b' are the element in 'a 'squared, regardless of the order,  
#include<iostream>
#include<algorithm>
using namespace std;
bool comp(int a[], int b[], int n1,int n2){
      // if both of them have no element then return true
    // if(a.size()==0 || b.size()==0)
    if(a==NULL || b==NULL)
    return false;
    // if they have different size then return false
    if(n1 != n2)
    // if(a.size()!= b.size())
    return false;
    sort(a,a+n1);
    sort(b,b+n2);
    for (int i = 0; i < n1; i++) {
        if (b[i] != a[i] * a[i]) {
            return false;
        }
    }
    return true;
}
int main(){
    int n1, n2;
    cout<<"Enter the value of n1:"<<endl;
    cin>>n1;
    int a[n1];
    cout<<"Enter the elements present in the array a:"<<endl;
    for(int i = 0;i<n1 ;i++){
        cin>>a[i];
    }
    cout<<"Enter the value of n2:"<<endl;
    cin>>n2;
    int b[n2];
    cout<<"Enter the elemnts present in the array b:"<<endl;
    for(int i = 0;i<n2;i++){
        cin>>b[i];
    } 
// 1)   cout<< comp(a,  b, n1,n2);
// 2)
// if (comp(a, b,n1,n2)) {
//         cout << "Arrays have the same elements with the same multiplicities." <<endl;
//     } else {
//         cout << "Arrays do not have the same elements with the same multiplicities." <<endl;
//     }
// 3)
  comp(a,b,n1,n2);
  if (true) {
        cout << "Arrays have the same elements with the same multiplicities." <<endl;
    } else {
       cout << "Arrays do not have the same elements with the same multiplicities." <<endl;
    }
    return 0;
}