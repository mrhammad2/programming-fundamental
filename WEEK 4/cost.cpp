#include<iostream>
using namespace std;
main(){
int size,cost,area,costperpound,costpersquarefoot;
cout<<"enter the size of fertilizer bag in pounds:";
cin>>size;

cout<<"enter the cost of bag:";
cin>>cost;

cout<<"enter area of the bag can cover:";
cin>>area;

costperpound=cost/size;
cout<<"the costperpound is:" <<costperpound;

costpersquarefoot=cost/area;
cout<<costpersquarefoot;
}