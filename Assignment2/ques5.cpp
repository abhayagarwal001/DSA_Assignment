#include<iostream>
using namespace std;

int main()
{
    int number;
    cout<<"Enter a 3 digit number:";
    cin>>number;

    int org=number;
    
    int sum=0;

    int first_digit=number/100;
    number=number%100;
    int second_digit=number/10;
     number=number%10;
    int third_digit=number/1;

   sum=first_digit+second_digit+third_digit;

   cout<<"Sum of digits of " <<org<<" is "<<sum;
   

    return 0;
    

}