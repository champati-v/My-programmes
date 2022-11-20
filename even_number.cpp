//Check whether given number is even or not//

#include<iostream>
using namespace std;

int main()
{
    int p;

    cout<<"Please enter the number: ";
    cin>>p;
    
    if (p%2==0)
    {
        cout<<p<<" is a even number.";
    }
    else
    cout<<p<<" is not a even number.";

    return 0;
    
}