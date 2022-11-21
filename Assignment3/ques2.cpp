#include<iostream>
using namespace std;

int main()
{
    int number;
    cout<<"Enter a number:";
    cin>>number;

    if(number<0)
    number=number*-1;
    
    cout<<"Absolute value is "<<number;
    

    return 0;
    

}