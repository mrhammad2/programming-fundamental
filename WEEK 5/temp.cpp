#include<iostream>
using namespace std;
main(){

int temp1, temp2;
cout<<"enter the temperature of City 1:";
cin>>temp1;

cout<<"enter the temperature of City 2:";
cin>>temp2;

int difference = (temp1 - temp2);

if(difference > 10){
cout<<"Difference is too Big";
}
else{
cout<<"Program Ends";
}
return 0;
}