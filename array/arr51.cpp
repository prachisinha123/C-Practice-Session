// Passing Pointer to function
#include<iostream>
using namespace std;
void swap(int *a,int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main(){
   int a = 2;
   int b = 4;
   int *aptr=&a;
   int *bptr=&b;
   swap(aptr,bptr);
   cout<<a<<" "<<b<<endl;
//    here we observe that no swapping is there,same value is printed.So we use pointer.
//    we can directly send the address of a and b also instead of pointer.
//   int a = 2;
//    int b = 4;

//    swap(&a,&b);
//    cout<<a<<" "<<b<<endl;
// Here we are using 'call by reference' instead of sending by value
    return 0;
}