#include<iostream>
using namespace std;
void happyMessage(){
char ch = 'y';
while(ch == 'y')
{
cout << "I am Happy" << endl;
cout << "Press y to continue or any key to exit" <<endl;
cin>>ch;
}
}
main()
{
happyMessage();
}