//Pattern printing 1
#include <iostream>

using namespace std;

int main()
{
    int n;
    cout<<"Enter the Number of star to print: ";
    cin >>n;
    
    int row=1;
   //outer while for printing rows 
    while(row<=n){
        //inner loop for printing column
        int col=1;
        while(col<=row){
            cout<<row<<" ";
             col=col+1;;
        }
        cout<<endl;
        row=row+1;   
    }
    return 0;
}
