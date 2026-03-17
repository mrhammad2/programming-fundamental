#include<iostream>
using namespace std;
void showSum(){

int sum = 0;
for(int i = 1; i<=5; i= i+1)
{
sum = sum + i;
}
cout<< sum << endl;
}
main()
{
showSum();
}