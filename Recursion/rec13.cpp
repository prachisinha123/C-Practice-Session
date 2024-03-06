// Print numbers till n in Increasing order:
#include<iostream>
using namespace std;
void inc(int n){
   if(n==0){
    return;
   }
   inc(n-1);
   cout<<n<<endl;
}
int main()
{
 int n;
 cout<<"Enter the number n:"<<endl;
 cin>>n;
 inc(n);
    return 0;
}