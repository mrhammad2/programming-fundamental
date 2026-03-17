#include<iostream>
using namespace std;
main(){

string x;
float pi=3.14;
float area;
cout<<"enter a figure:";
cin>>x;
if(x=="square"){
int a;
cout<<"enter number:";
cin>>a;
area=a*a;
}
else if(x=="rectangle"){
float a, b;
cout<<"enter two numbers as input:";
cin>>a>>b;
area=a*b;
}
else if(x=="circle"){
float a;
cout<<"enter number:";
cin>>a;
area=pi*a*a;
}
else{
cout<<"enter base and height:";
float b, h;
cin>>b;
cin>>h;
area=0.5*b*h;
}
cout<<"Area is :"<<area;
}