#include<iostream>
using namespace std;
main(){

int sqrmtr,width,height,area,numberofwalls;
cout<<"number of squre meters you can print:";
cin>>sqrmtr;

cout<<"width of the single wall:";
cin>>width;

cout<<"height of the single wall:";
cin>>height;

area=width*height;
numberofwalls=sqrmtr/area;

cout<<"number of walls you can print are:"<<numberofwalls;
}