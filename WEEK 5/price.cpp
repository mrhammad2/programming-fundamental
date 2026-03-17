#include<iostream>
using namespace std;
main(){

string country;
double ticketprice, discountprice, finalprice;

cout<<"enter the name of country:";
cin>>country;
cout<<"enter the ticket price:";
cin>>ticketprice;

if(country == "Ireland"){
discountprice = 0.10;
}
else{
discountprice = 0.05;
}
finalprice = ticketprice - (ticketprice * discountprice);

cout<<"discounted price is:" <<finalprice;
return 0;
}