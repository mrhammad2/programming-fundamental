#include<iostream>
using namespace std;
void fibonacciSeries(int leng){

int n1 = 0, n2 = 1, next;
cout << n1 << ", ";
cout << n2;
for(int x = 1; x < leng - 1; x = x + 1)
{
next = n1 + n2;
cout << ", " << next;
n1 = n2;
n2 = next;
}
}
main()
{
int n;
cout << "How many numbers of Fibonacci Series yo want to print:";
cin >> n;
fibonacciSeries(n);
}
