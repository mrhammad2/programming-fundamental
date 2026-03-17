#include<iostream>
using namespace std;
int total_digits(int number){

int count = 0;
for(int i = number; i>0; i=i/10)
{
count = count +1;
}
return count;
}
main(){
int n, total;
cout << "enter number:";
cin>>n;
total = total_digits(n);
cout << "Total Number of Digits:" << total;
}