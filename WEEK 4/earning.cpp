#include<iostream>
using namespace std;
main(){

float vegprice,fruitprice,totalcoins,rps;
int totalkgveg,totalkgfruits;
cout<<"enter fruit price per kg (in coins):";
cin>>fruitprice;

cout<<"enter vegetable price per kg (in coins):";
cin>>vegprice;

cout<<"enter total kg of vegetables:";
cin>>totalkgveg;

cout<<"enter total kg of fruits:";
cin>>totalkgfruits;

totalcoins=(fruitprice*totalkgfruits)+(vegprice*totalkgveg);
rps=totalcoins/1.94;

cout<<"total earnings in rupees (rps) is:"<<rps;
}