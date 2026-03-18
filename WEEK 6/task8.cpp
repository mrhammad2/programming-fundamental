#include <iostream>
using namespace std;
main(){
int num,digit, remainder, count = 0;
cout<<"Enter a number:";
cin>>num;
cout<<"Enter digit to find frequency:";
cin>>digit;
while(num != 0)
{
remainder = num % 10;
if(remainder == digit)
{
num = num / 10;
}
cout<<"Frequency = "<<count;
}
}