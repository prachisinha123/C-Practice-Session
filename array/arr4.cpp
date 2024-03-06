// Binary search
#include<iostream>
using namespace std;
int binarySearch(int arr[],int n,int key){
    // here we define the starting and ending point.And we have to work till s = e,as after that we came 
    // to know that our element is not present in this array.   
    int s = 0;
    int e = n; 
    while(s<=e){
        int mid = (s+e)/2;

    if(arr[mid] == key)
    {
        return mid;}
    
    else if(arr[mid]>key){
        // if mid-element is greater than  key element,then we shift our end element e to mid-1,so
        // by doing this oue element automatically divides.
          e = mid-1;
    }
    else{
        s = mid+1;
    }
  
}
 return -1;

}
 
int main()
{
    int n;
    cout<<"Enter the number of element in array:"<<endl;
    cin>>n;
    int arr[n];

    cout<<"Enter the elements present in the array:"<<endl;
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    int key;
    cout<<"Enter the key element to be searched:"<<endl;
    cin>>key;
    cout<<"The index of key element is:"<<endl;
    int index = binarySearch(arr,n,key);
    cout<<index;
    

    return 0;
}

