#include<iostream>
using namespace std;
main(){
double bill, discount, finalbill;
cout<<"enter your bill(RS):";
cin>>bill;

if(bill <= 5000){
discount = bill * 0.05;
}
else{
discount = bill * 0.10;
}
finalbill = bill - discount;

cout<<"Your discounted bill is: RS " << finalbill;
return 0;
}


