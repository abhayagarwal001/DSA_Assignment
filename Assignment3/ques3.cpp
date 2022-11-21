#include<iostream>
using namespace std;

int main()
{
    int cp,sp;

    cout<<"Enter Cost Price:";
    cin>>cp;

    cout<<"Enter Selling Price:";
    cin>>sp;
cout<<endl;
    if(cp>sp)
    cout<<"Loss= "<<cp-sp;
    else if(sp>cp)
    cout<<"Profit= "<<sp-cp;
    else
    cout<<"No Profit & No Loss";

    return 0;
    

}