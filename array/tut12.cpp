#include<iostream>
using namespace std;

int main(){
// What is pointer?--->data types which holds the address of others data types.
    // int a = 3;
    // int * b = &a;
        // ----OR-----
    int a = 3;
    int*b;
    b = &a;
    cout<<"The address of a is "<<&a<<endl;
    cout<<"The address of a is "<<b<<endl;
    // Both will print the same address,this is because 
    // & -->address of operator
     
    // * --> (value at) Dereference operator:It will tell the value at this address,
    cout<<"The value at address b is "<<*b<<endl;
    // Pointer to pointer:Which stores the address of the pointer.
    int ** c = &b;
    cout<<"The address of b is "<<&b<<endl;
    cout<<"The address of b is "<<c<<endl;
    cout<<"The value at address c is "<<*c<<endl; 
    cout<<"The value at address value_at(value_at(c)) is "<<c<<endl; 
    
    


    
     

    
    return 0; 
}