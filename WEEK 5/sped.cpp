#include<iostream>
using namespace std;
main(){

int speed;
cout<<"enter speed:";
cin>>speed;

if(speed <= 10){
cout<<"SLOW.";
}

else if(speed <= 50){
cout<<"AVERAGE.";
}

else if(speed <= 150){
cout<<"FAST.";
}

else if(speed <= 1000){
cout<<"ULTRA FAST.";
}

else{
cout<<"EXTREMELY FAST.";
}
return 0;
}