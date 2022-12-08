//Pattern printing 1
#include <iostream>

using namespace std;

int main()
{
    int n;
    cout<<"Enter the Number of star to print: ";
    cin >>n;
    
    int i=1;
   //outer while for printing rows 
    while(i<=n){
        //inner loop for printing column
        int j=1;
        while(j<=n){
            cout<<" * ";
             j=j+1;;
        }
        cout<<endl;
        i=i+1;   
    }
    return 0;
}
