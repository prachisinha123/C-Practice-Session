// Juggler Sequence:

// Juggler Sequence is a series of integers in which the first term starts with a positive integer
// number a and the remaining terms are generated from the immediate previous term using the below 
// recurrence relation:

#include<iostream>
#include<cmath>
using namespace std;
int JugglerSequence(int n){
    if(n==1){
      cout<<1;
      return;
    }
    if(n%2==0){
        int n = int(pow(n,0.5));
        cout<< n;
    }
    else{
        int n = int(pow(n,1.5));
        cout<<n;
        
        
    }
    JugglerSequence(n);
    
}
int main(){
   int n;
   cin>>n;
   
   JugglerSequence(n)<<endl;
   

    return 0;
}
