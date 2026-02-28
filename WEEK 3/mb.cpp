#include<iostream>
using namespace std;
main(){

int mb;
cout<<"enter size in mb";
cin>>mb;

float kb;
kb = mb*1024;

float bytes;
bytes = kb*1024;

float bit;
bit = bytes*8;

cout<<mb <<" mb equal to "<<bit << "bit";
}