#include<iostream>
using namespace std;
int sum(int a,int b){
    int c = a+b;
    return c;
}
// This will not swap the value of a and b.
// void swap(int a,int b){
//     int temp = a;
//     a = b;
//     b = temp;
// }
// here we are using the pointer concept.
// It is called 'call by reference' using pointer.
// void swapPointer(int*a,int*b){
//     int temp = *a;
//     *a = *b;
//     *b = temp;
// }
// It is called'call by reference' using reference variable.
    int  & swapReferenceVar(int &a ,int &b){
    int temp = a;
     a = b;
     b = temp;
     return a;
    //  Here we are returning the variable a.So we chnage void to int.
}

int main()
{
    int a = 4, b = 5;
    // cout<<"The sum of the 4 and 5 is "<<sum(a, b);
    cout<<"The value of a is "<<a<<" and the value of b is "<<b<<endl;
    // This will not swap the value of the variable of a and b.
    // swap(a,b);     
    // swapPointer(&a,&b);
    swapReferenceVar(a,b) = 766;
    cout<<"The value of a is "<<a<<" and the value of b is "<<b<<endl;
    return 0;
}

