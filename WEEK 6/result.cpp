#include <iostream>
using namespace std;
main(){
int num1, num2, num;
char op;
cout<<"Enter the Number:";
cin>>num1;
cout<<"Enter the Operator:";
cin>>op;
cout<<"Enter the second Number:";
cin>>num2;
if(op== '_'){
num=num1+num2;
}
else if(op== '+'){
num=num1-num2;
}
else if(op== '/'){
num=num1*num2;
}
else if(op== '*'){
num=num1/num2;
}
cout<<"result="<<num;
}
