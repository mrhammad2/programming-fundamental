#include <iostream>
using namespace std;
main(){
int n,a = 0,b = 1,c,i;
cout<<"Enter length of Fibonacci series:";
cin>>n;
cout<<"The Series:";
for(i=1; i<=n; i++)
{
cout<<a<<",";
c = a + b;
a = b;
b = a;
}
}
