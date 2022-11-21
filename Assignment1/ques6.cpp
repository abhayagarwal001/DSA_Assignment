#include<iostream>
using namespace std;

int main()
{
    int num1,num2;
    cout<<"Enter value of num1:";
    cin>>num1;
    cout<<"Enter value of num2:";
    cin>>num2;

    cout<<"Before Swap:";
    cout<<"num1= "<<num1<<" "<<"num2= "<<num2<<endl;


    int temp;
    temp=num1;
    num1=num2;
    num2=temp;

    cout<<"After Swap:";
    cout<<"num1= "<<num1<<" "<<"num2= "<<num2;

    return 0;
    

}