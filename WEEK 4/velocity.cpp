#include<iostream>
using namespace std;
main(){
int time,initialvelocity,acceleration;
cout<<"enter initial velocity (m/s):";
cin>>initialvelocity;

cout<<"enter acceleration (m/s^2):";
cin>>acceleration;

cout<<"enter time (s):";
cin>>time;

int finalvelocity;
finalvelocity=(acceleration*time)+initialvelocity;

cout<<"final velocity (m/s):"<<finalvelocity;
}