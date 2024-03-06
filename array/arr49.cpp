// Pointers and arrays:
#include<iostream>
using namespace std;
int main()
{
   int arr[] = {10,20,30};
//    This arr variable also acts similar to pointer.
//    cout<<*arr<<endl;
//    here we can also made a pointer,and use this pointer to print the array.
    // int *ptr = arr;
    // for(int i = 0;i<3;i++){
    //     cout<<*ptr<<endl;
    //     ptr++;
        // by doing ptr++,it goes 4bytes ahead and then it points to 20.
    // }
    // How to print the array using arr which is similar to pointer.
    int *ptr = arr;  
    for(int i = 0;i<3;i++){
        
        cout<<*(arr+i)<<endl;
        
      
        // arr++;  This is error,we can not increment like this,it is illegal
    }
    return 0;
} 