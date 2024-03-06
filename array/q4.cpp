// Given an array which consists of only 0,1 and 2.Sort the array without using any sorting algo
#include<iostream>
using namespace std;
void sort_array_0_1_2(int A[],int n)
{
    // Here f = count0,s = count1,t = count2
    int f = 0,s = 0,t = 0;
    for(int i = 0; i<n;i++)
{
    if(A[i] ==0)
       f++;
    else if(A[i] == 1)
       s++;
    else
      t++;
}
for(int i = 0;i<f;i++){
    A[i] = 0;
}
for(int i = f;i<f+s;i++)
{
    A[i] = 1;
}
for(int i =f+s;i<f+s+t;i++){
    A[i] = 2;
}
}
int main()
{
  int i,A[100],n;
  cout<<"Enter number of elements present in the array"<<endl;
  cin>>n;
  cout<<"Enter array:"<<endl;
  for(i = 0;i<n;i++)
  {
    cin>>A[i];

  }
  cout<<"Array after sorting:\n"<<endl;
  sort_array_0_1_2(A,n);
   for(i = 0;i<n;i++){
    cout<<A[i]<<endl;
   }
   return 0;
}

  












