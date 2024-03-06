// Pointer to pointer concept:
#include<iostream>
using namespace std;
int main(){
    int a = 10;
    int*p;
    p = &a;
    cout<<p<<endl;
    cout<<*p<<endl;
    //Here we are making a pointer which is pointing to the pointer p,that is pointer to pointer comcept.
    // By this a new variable is formed in the memory whose value is = address of p.
    int**q = &p; 
    cout<<q<<endl;
    // This will print the value of address of pointer variable 'p' which is stored in 'q' pointer variable.
    cout<<*q<<endl;
    // This will print the value of pointer p = address of variable a,because pointer q is pointing to pointer p.
    cout<<**q<<endl;
    // This will print the value of variable a.

    
    
    return 0;
}