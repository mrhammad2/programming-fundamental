#include<iostream>
using namespace std;
void Validate(){

int value;
cout << "Please enter a Positive Number:";
cin>>value;
while (value <=0)
{
cout << "Error: " <<value<< " is not a POsitive Number." <<endl;
cout<< "Please enter a Positive Number:";
cin>>value;
}
}
main()
{
Validate();
cout<< "Progress Ends" << endl;
}
