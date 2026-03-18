#include <iostream>
using namespace std;
main(){
int num, remainder, sum = 0;
cout<<"Enter a number:";
cin>>num;
while(num != 0)
{
remainder = num % 10;
sum += remainder;
num = num / 10;
}
cout<<"Sum of digits = "<< sum;
}

