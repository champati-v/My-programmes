//To check wether given number is negative or positive//

#include<iostream>
using namespace std;

int main(){

int num;

cout<<"Please enter your number: ";
cin>>num;

if (num>0)
{
    cout<<num<<" is a positive number";
}

else if (num==0 || num==-0)
{
    cout<<"Zero is neither negative nor positive";
}


else
    cout<<num<<" is a negative number";
}
