#include<iostream>
using namespace std;
main(){

int min,fps,totalframe;
cout<<"enter the number of minute:";
cin>>min;

cout<<"enter frames per second:";
cin>>fps;

int totalsec;
totalsec=min*60;
totalframe=totalsec*min;

cout<<"total number of frames are:"<<totalframe;
}