# Sum-of-the-digits
Summmation of the existing digits in a number
#include <iostream>
using namespace std;

int main() {
int number,sum=0,i,remainder,temp;
cout<<"Enter any number : ";
cin>>number;
temp=number;

while(temp!=0){
remainder=temp%10;
sum=sum+remainder;
temp=temp/10;
}
cout<<"Sum of the digits = "<<sum;
    return 0;
}
