// Pairsum:Optimise solution O(n),linear traverse
#include <iostream>
using namespace std;
bool pairsum(int a[], int n, int k)
{
    int low = 0;
    int high = n - 1;
    while (low < high)
    {
        if (a[low] + a[high] == k)
        {
            cout << low << " " << high << endl;
            return true;
        }
        else if (a[low] + a[high] > k)
        {
            high--;
        }
        else
        {
            low++;
        }
    }
    return false;
}

int main()
{
    int n;
    cout << "Enter the number of elements present  in the array:" << endl;
    cin >> n;
    int a[n];
    cout << "Enter the elements of the array:" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int k;
    cout << "Enter the key element:" << endl;
    cin >> k;

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[j] < a[i])
            {
                int temp = a[j];
                a[j] = a[i];
                a[i] = temp;
            }
        }
    }
    cout << "The array after sorting:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << a[i];
    }
    cout << "" << endl;
    pairsum(a, n, k);

    return 0;
}