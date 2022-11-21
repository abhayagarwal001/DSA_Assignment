#include<iostream>
using namespace std;

int main()
{   
    float num1,num2;
    char operation;
    cout<<"Choose operation to perform (+,-,*,/):";
    cin>>operation;

    switch (operation)
    {
    case '+': 
               cout<<"Enter Number1"<<endl;
               cin>>num1;
               cout<<"Enter Number2"<<endl;
               cin>>num2;
               cout<<"Addition of "<<num1<<" and "<<num2<<" is "<<num1+num2;
               break;

    case '-':
               cout<<"Enter Number1"<<endl;
               cin>>num1;
               cout<<"Enter Number2"<<endl;
               cin>>num2;
               cout<<"Subtraction of "<<num1<<" and "<<num2<<" is "<<num1-num2;
               break;


    case '*':
               cout<<"Enter Number1"<<endl;
               cin>>num1;
               cout<<"Enter Number2"<<endl;
               cin>>num2;
               cout<<"Multiplication of "<<num1<<" and "<<num2<<" is "<<num1*num2;
               break;

    case '/':
               cout<<"Enter Number1"<<endl;
               cin>>num1;
               cout<<"Enter Number2"<<endl;
               cin>>num2;
               cout<<"Division of "<<num1<<" and "<<num2<<" is "<<num1/num2;
               break;
    
    default:
               cout<<"Incorrect choice ";
               break;
    }

   
    

    return 0;
    

}