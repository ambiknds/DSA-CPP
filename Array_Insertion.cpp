#include <iostream>

using namespace std;
#define size 7
int main()
{
    int arr[size] = {56,78,45,34,64,95,23};
    int element, pos;
    cout<<"Enter the position of element to insert: ";
    cin>>pos;
    cout<<"Enter the Element to insert: ";
    cin>>element;
    
    if(pos<=size && pos>=0){
        for(int i = size; i>pos;i--)
            arr[i] = arr[i-1]; //shifting of element in array
            arr[pos] = element;
        
        for(int i=0;i<=size;i++)
            cout<< arr[i]<<" "; //printing the array
        
    }else{
        cout<< "Invalid position entered";
    }
    return 0;
}
