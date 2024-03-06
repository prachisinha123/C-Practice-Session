# include<iostream> 
using namespace std;
// Local variable:A variable made inside the function is called the local variable.
int glo = 6;
void sum(){
    int a;
    cout<< glo;
} 
int main(){
    int glo = 9;
    glo = 78; 
    // int a = 14;
    // int b = 15;
    // We can also combine both th e integer value.The output is same.
    int a = 14, b = 15;
    float pi = 3.14;
    char c = 'd';
    bool is_true = false;

    // Let we have function called sum.
    sum();
    cout<<glo<< is_true;
    // cout<<"This is tutorial 4.\nHere the value of a is "<<a<<" .\nThe value of b is "<< b;
    //  cout<<"The value of pi is: "<<pi;
    // cout<<"\nThe value of c is:"<<c;
     return 0;
 }
//  here we observe that local variable has more precedence over global variable.
// And our local variable get updated.
// Can the name of local and global variable will be same?
// YES, but the precedence of local variable is more over local variable.
// Here we take a another variable called boolean which returns true(1),false(2). 