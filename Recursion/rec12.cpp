// Print numbers till n
#include<iostream>
using namespace std;
void dec(int n){
    if(n==0){
        return ;
    }
  cout<<n<<endl;
  dec(n-1);


}
int main()
{
int n;
cout<<"Enter the number n:"<<endl;
cin>>n;
dec(n);
    return 0;
}