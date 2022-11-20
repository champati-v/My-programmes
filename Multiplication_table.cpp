//Print multiplication table of the given number and range//

#include<iostream>
using namespace std;

int main(){

    int n, range;
    cout<<"Please enter a positive number: ";
    cin>>n;

    cout<<"Enter the range: ";
    cin>>range;

    for ( int i = 1; i <=range; i++)
    {
        cout<<n<<" X "<<i<<" = "<< n*i<<endl;
    }
    
    
}