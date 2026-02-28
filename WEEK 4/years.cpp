#include<iostream>
using namespace std;
main(){

int age,move,avgyears;
cout<<"enter the person's age:";
cin>>age;

cout<<"enter the number of times they have moved in:";
cin>>move;

avgyears=age/(move+1);

cout<<"average number of years lived in the same house:"<<avgyears;
}
