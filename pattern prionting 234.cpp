//Pattern printing 1
#include <iostream>

using namespace std;

int main()
{
    int n;
    cout<<"Enter the Number of star to print: ";
    cin >>n;
    
    int i=2;
   //outer while for printing rows 
    while(i<=n){
        //inner loop for printing column
        int j=2;
        while(j<=n){
            //column printing
            cout<<j;
             j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}
