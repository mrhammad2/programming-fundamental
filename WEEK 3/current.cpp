#include<iostream>
using namespace std;
main(){

cout<<"enter the charge (Q) in coulombs:";
int charge;
cin>>charge;

cout<<"enter the time (t) in seconds:";
int time;
cin>>time;

float current;
current = charge/time;

cout<<" the current (I) is = "<< current;
}
