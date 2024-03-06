// Find the Factorial of a large number:
// What is Factorial of a number?
// Factorial of a non-negative integer, is the multiplication of all integers smaller than or equal to n. 



// Why conventional way of computing factorial fails for large numbers?
// A factorial of 100 has 158 digits. It is not possible to store these many digits even if we use long int. 
// #define is something call as preprocessor, which is used to create constant, for Eg: #define x  5, so 
// whenever we want to use 5, we can use x
#include<iostream>
using namespace std;
#define MAX 500
// This function multiplies x with the number
// represented by res[].
// res_size is size of res[] or number of digits in the

// number represented by res[]. This function uses simple
// school mathematics for multiplication.
// This function returns the
// new value of res_size
int multiply(int x, int res[], int res_size){
    // Initialize carry
     int carry  = 0;
      // One by one multiply n with individual digits of res[]
     for(int i = 0;i<res_size;i++){
        int prod = res[i]* x + carry;
        
        // Store last digit of 'prod' in res[]
        res[i]= prod % 10;

        // Put rest in carry
        carry = prod /10;
     }

       // Put carry in res and increase result size
     while(carry){
        res[res_size] = carry % 10;
        carry = carry / 10;
        res_size++;
     }
     return res_size;

}

void factorial(int n){
   int res[MAX];
   // Initialize result
   res[0] = 1;
   int res_size = 1;
   // Apply simple factorial formula n! = 1 * 2 * 3
    // * 4...*n
   for(int x = 2;x <= n; x++){
     res_size = multiply(x,res,res_size);
   }

//    Print the result;
 cout<<"Factorial of the given number:"<<endl;
 for(int i = res_size - 1; i >= 0;i--){
    cout<<res[i];
 }
}
int main(){
  int n;
  cout<<"Enter the value of n, for which we want to find factorial:"<<endl;
  cin>>n;
  factorial(n);
 return 0;
}