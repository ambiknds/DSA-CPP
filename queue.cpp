//QueueDSA
#include <iostream>
using namespace std;
#define size 6

int arr[size];
int front = 0;
int rear = 0;

//helping function for enqueue
int isQueueFull(){
    if(rear==size)
        return 1;
    return 0;
}
//insertion in queue
void enqueue(int val){
    if(isQueueFull())
        cout<<"Queue is full"<<endl;
    else
        arr[rear] = val;
        rear++;
}
//helping function for dequeue/deletion
int isQueueEmpty(){
    if(front==rear)
        return 1;
    return 0;
}
//deletion in a queue
void dequeue(){
    if(isQueueEmpty)
        cout<<"Queue is empty amd cannot delete more";
    else
        cout<<"dequeue element is " << arr[front];
        front++;
}

int main()
{
    enqueue(66);
    enqueue(45);
    enqueue(37);
    enqueue(42);
    enqueue(95);
    enqueue(81);
   // enqueue(81);
    
    for(int i=0;i<size;i++){
        cout<<arr[i]<< " ";
    }

    return 0;
}