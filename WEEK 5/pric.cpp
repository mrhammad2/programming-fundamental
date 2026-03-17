#include<iostream>
using namespace std;
main(){

int red, white, tulips;
double originalprice, finalprice;

cout<<"price of Red Rose:";
cin>>red;

cout<<"price of White Rose:";
cin>>white;

cout<<"price of Tulip:";
cin>>tulips;

originalprice = (red * 	2.00) + (white * 4.10) + (tulips * 2.50);
finalprice = originalprice;

if(originalprice > 200){
finalprice = originalprice * 0.80;
}
cout<<"Original Price:" <<originalprice <<endl;
cout<<"Price after Discount:" <<finalprice;
return 0;
}