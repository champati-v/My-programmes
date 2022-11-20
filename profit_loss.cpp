//Check wether seller has made profit or loss//

#include<iostream>
using namespace std;

int main() {

    int cp, sp;

    cout<<"Please enter the Cost price: ";
    cin>>cp;

    cout<<"Please enter the Selling price: ";
    cin>>sp;

    if (sp>cp)
    {
        cout<<"Congratulations! You've made a profit of "<<sp-cp<<" rupees";
    }

    else
    cout<<"Its a loss of "<<cp-sp<<" rupees";
    
}