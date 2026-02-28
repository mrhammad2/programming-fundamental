#include<iostream>
using namespace std;
main(){

int i,p,chance;
cout<<"enter imposter count:";
cin>>i;

cout<<"enter player count:";
cin>>p;

chance=100*(i/p);

cout<<"chances are:"<<chance<<"%";
}