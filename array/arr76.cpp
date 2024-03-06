#include<iostream>
using namespace std;

void cmnElemt(int a[], int b[], int c[], int n1, int n2, int n3) {
    // Initializing starting indices for a[], b[], c[].
    int i = 0, j = 0, k = 0;

    while (i < n1 && j < n2 && k < n3) {
        // If a[i], b[j], and c[k] are equal, print any of them and move ahead in all arrays.
        if (a[i] == b[j] && b[j] == c[k]) {
            cout << a[i] << " ";
            i++;
            j++;
            k++;
        }
        // Move ahead in the array with the smallest element.
        else if (a[i] < b[j] || a[i] < c[k]) {
            i++;
        } else if (b[j] < a[i] || b[j] < c[k]) {
            j++;
        } else {
            k++;
        }
    }
}

int main() {
    int n1, n2, n3;
    
    cout << "Enter the value of n1:" << endl;
    cin >> n1;
    int a[n1];
    cout << "Enter the elements of array a:" << endl;
    for (int i = 0; i < n1; i++) {
        cin >> a[i];
    }

    cout << "Enter the value of n2:" << endl;
    cin >> n2;
    int b[n2];
    cout << "Enter the elements of array b:" << endl;
    for (int j = 0; j < n2; j++) {
        cin >> b[j];
    }

    cout << "Enter the value of n3:" << endl;
    cin >> n3;
    int c[n3];
    cout << "Enter the elements of array c:" << endl;
    for (int k = 0; k < n3; k++) {
        cin >> c[k];
    }

    cout << "Common elements are:" << endl;
    cmnElemt(a, b, c, n1, n2, n3);

    return 0;
}
