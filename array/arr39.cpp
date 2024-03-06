// Pair Sum Problem: Check if there exist two elements in an array such that their sum is equal to given k.
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number of elements present in the array:" << endl;
    cin >> n;
    int a[n];
    cout << "Enter the elements in the array:" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int k;
    cout << "Enter the key element:" << endl;
    cin >> k;

    int sum = 0;
    int res = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            sum = a[i] + a[j];
            cout<<i<<"  "<<j<<endl;
            if (sum == k){
                cout<<"The array element which  is equal to k is: " <<a[i] << " + " << a[j] << " = ";
                 res = a[i]+a[j];
                 cout<<res<<endl;
               return 0;   
            }
            // else if(sum != k){
            // cout<<"No pair exits whose sum is equal to given element k"<<endl;
            // }
    }
    }
      if(sum != k){
            cout<<"No pair exits whose sum is equal to given element k"<<endl;
            }


    return 0;
}
// Time complexity:two loop.so O(n^2)
