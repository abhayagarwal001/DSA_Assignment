#include<iostream>
using namespace std;

int main()
{
    int number;
    cout<<"Enter a 5 digit number:";
    cin>>number;
    
    int sum=0;

    int first_digit=number/10000;
    number=number%10000;
    int second_digit=number/1000;
     number=number%1000;
    int third_digit=number/100;
     number=number%100;
    int fourth_digit=number/10;
     number=number%10;
    int fifth_digit=number/1;

   sum=first_digit+fourth_digit;

   cout<<"Sum of 1st and 2nd last digit is "<<sum;
   

    return 0;
    

}