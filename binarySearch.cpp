#include <iostream>
using namespace std;
#define SIZE 8
int binarySearch(int arr[], int start, int end, int key){
    int mid;
    
    while(start<=end){
        mid=(start+end)/2;
        //middle is the value
        if(arr[mid] == key)
            return 1;
        //key lies in right side
        else if(arr[mid] < key)
            start = mid + 1;
        else
            end = mid - 1;
            
    }
    return 0;
   
}
int main()
{
    int arr[SIZE] = {11,22,33,44,55,66,77,88};
    int key;
    
    cout<<"Enter the key to search: ";
    cin>>key;
    
    if(binarySearch(arr, 0, SIZE-1, key) == 1){
        cout<<"Key is found";
    }else{
        cout<<"Key is not found";
    }
    
    return 0;
}