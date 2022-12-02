//linear search unordered
#include <iostream>
using namespace std;
#define SIZE 6 //macros or constant value

int linearSearch(int arr[], int size, int key){
    for(int i=0;i<size;i++)
        if(arr[i] == key)
            return 1;
}
//driver code
int main()
{
    int arr[SIZE] = {94,66,35,68,34,58};
    int key;
    cout<<"Enter the key to search: ";
    cin>>key;
    
    if(linearSearch(arr, SIZE ,key) == 1)
        cout<<"key is found";
    else
        cout<<"key is not found";
    return 0;
}
