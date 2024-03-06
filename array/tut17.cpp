#include<iostream>
using namespace std;
// For making a function inline we have to just write inline before function.Inline function reduce the internal operation
// of registers,call of the function.It saves the compile time.
// inline int product(int a,int b)
// {
//     return a*b;
// }
// 
    // inline  int product(int a,int b){
    // Static variable:It means that it (this variable) get initialize only at once,and after that it will retain the value 
    // This line of intialization runs only at once.
    // Not recommended to use below lines below inline functions. 
//      int c = 0;
//      c = c+1;
//      return a*b; 
// }



// Default Arguments:
// Here we are writing the function for calculation of money,that if we are having some current money,then
// then how much money we received by multiplying by this factor,that is rate of interest = 4%,this is the
// default rate of interest,but there are some people who received more money,they eill get more rate 
// of interest ,beacuse may be they are either bank-employee,or any other VIP-persons.
// It means that if we have 1lakh rupees in account then after 1 year,i received 1 lakh 4 thousands.
//
 float moneyReceived(int currentMoney,float factor=1.04)
{
       return currentMoney * factor;     
}
// During making of the function make sure that we will write the compulsory argument first,and then write the default argument.
//  CONSTANT ARGUMENT:  
int strlen(const char *p){

}
int main()
{ 
    // int a,b;
    // cout<<"Enter the value of a and b"; 
    // cin>>a>>b;
    int money = 100000;
    // cout<<"The Product of a and b "<<product(a,b)<<endl;
    // cout<<"The Product of a and b "<<product(a,b)<<endl;
    // cout<<"The Product of a and b "<<product(a,b)<<endl;
    // cout<<"The Product of a and b "<<product(a,b)<<endl;  
    // cout<<"The Product of a and b "<<product(a,b)<<endl;
    // cout<<"The Product of a and b "<<product(a,b)<<endl;
    // cout<<"The Product of a and b "<<product(a,b)<<endl;
    // cout<<"The Product of a and b "<<product(a,b)<<endl;
    // cout<<"The Product of a and b "<<product(a,b)<<endl;
    
     cout<<"If you have "<<money<< "Rs in your bank account,you will receive "<<moneyReceived(money)<<"Rs after 1 year"<<endl;
     
    // Here we are passing only one agrument that is 'money' , but this functio take two arguments:one integer,and one float value 
     cout<<"If you have "<<money<< "Rs in your bank account,you will receive "<<moneyReceived(money,1.1)<<"Rs after 1 year";
    // Here,for Vip person,let say they got 10% rate of interest,so we can pass this value of factor.
    return 0;
}


// Inline function:
// In inline function,we request to the compiler that please make the function inline,then compiler sees this
// request and then if the reason of making the function inline is valid then only it will make ths function inline
// The point of making the function inline must be valid.  



// Constant argument:It is that argument that tells that the compiler that keep an eye that by any chance the function
// cannot change the value of this variable/