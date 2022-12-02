//Selection Sort
#include <iostream>
using namespace std;
//function to swap 2 numbers
void swap(int *x, int *y){
    int temp = *x;
    *x=*y;
    *y = temp;
}
//selection sort function
void selectionSort(int arr[], int x){
    int minIndex;
    for(int i=0;i<x;i++){
        minIndex = i;
        for(int j = i+1;j<x;j++)
            if(arr[j]<arr[minIndex])
              minIndex = j;
              
              if(minIndex!=i)
                swap(&arr[i], &arr[minIndex]);
    }
}
//printong the array
void printArr(int arr[], int size){
    for(int i = 0;i<size;i++)
        cout<<arr[i]<< " ";   
}
int main()
{
   
    int arr[] = {65,34,13,78,43,10,3,4,5,2,1000,500,100};
    int x  = sizeof(arr)/sizeof(arr[1]);
    cout<<"Unsorted array is: "<<endl;
    printArr(arr,x);
    
    cout<<"\nSorted array is: "<<endl;
    selectionSort(arr, x);
    printArr(arr,x);


    return 0;
}