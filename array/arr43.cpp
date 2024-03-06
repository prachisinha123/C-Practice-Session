// Transpose of Matrix:
// Problem:Given a square matrix A and its number of rows(or columns),N return the transpose A.
// The transpose of Matrix flipped over it's main diagonal,switching the row and column indices of the matrix
#include <iostream>
using namespace std;
int main(){
  int A[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
//   Here i represent the row and j represent column
  for(int i = 0;i<3;i++){
    for(int j = i;j<3;j++){
           int temp = A[i][j];
           A[i][j] = A[j][i];
           A[j][i] = temp;        
    }
  }
//    Print the transpose matrix:
for(int i = 0;i<3;i++){
    for(int j = 0;j<3;j++){
        cout<<A[i][j] <<" "  ;
    }
}

    return 0;
}