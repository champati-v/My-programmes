//Print natural numbers from 1 to N which are divisible by 5 and 13//

#include<iostream>
using namespace std;

int main(){

    int num;

    cout<<"Please enter your desired number: ";
    cin>>num;

    for (int i = 1; i <= num; i++)
    {
        if (i%5==0 || i%13==0)
        {
            cout<<i<<endl;
        }
    }
    
    return 0;
}