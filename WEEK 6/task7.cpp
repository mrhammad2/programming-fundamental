#include <iostream>
using namespace std;
main(){
int num, Repeat;
cout<<"Enter a Number:";
cin>>num;
while(num != 0)
{
num = num / 10;
Repeat++;
}
cout<<"Total number of digits = "<<Repeat;
}