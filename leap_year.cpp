//Checks wether given year is a leap year or not//

#include<iostream>
using namespace std;

int main(){

    int year;

    cout<<"Please enter a year.";
    cin>>year;

    if (year%4==0 && year%100==0 && year%400==0 )
    {
       cout<<year<<" is a leap year";
    }

    else if (year%4!=0)
    {
        cout<<year<<" is not a leap year.";
    }

    else if (year%100!=0)   
    {
        cout<<year<<" is a leap year.";
    }

    else if (year%400!=0)
    {
        cout<<year<<" is not a leap year.";
    }
    
}