//Print number from 1 to n:
#include<iostream>
using namespace std;
void printNos(int n){
    // Base ccondition:
    if(n==0){
        return;
    }
    printNos(n-1);
    cout<<n<<" ";
}
int main()
{
    int n;
  cout<<"Enter the number n:"<<endl;
  cin>>n;
  printNos(n);


    return 0;
}