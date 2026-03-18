#include <iostream>
using namespace std;
main(){
int num, mul, i;
cout<<"Enter a Number:";
cin>>num;
for(i=1; i<=10; i++)
{
mul=num*i;
cout<<num<<" x " <<i<<" = " <<mul<<endl;
}
}