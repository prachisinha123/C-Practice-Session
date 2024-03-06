// Reverse array in groups:
// This problem is part of GFG SDE Sheet. Click here to view more.
// Given an array arr[] of positive integers of size N. Reverse every sub-array group of size K.
// Note: If at any instance, there are no more subarrays of size greater than or equal to K,
//  then reverse the last subarray (irrespective of its size).
//  You shouldn't return any array, modify the given array in-place.
#include <iostream>
using namespace std;
int reverseArray(int b[], int c[], int k, int n)
{
    for (int i = 0; i < k; i++)
    {
        int temp = b[i];
        b[i] = b[n - 1];
        b[n -1] = temp;
    }
    cout << "Subarray after reverse:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << b[i] << "";
    }
}
int main()
{
    int n;
    cout << "Enter the no of elements present in the array:" << endl;
    cin >> n;
    int a[n];
    cout << "Enter the elements in the array:" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int k;
    cout << "Enter the size of the subarray:" << endl;
    cin >> k;

    return 0;
}