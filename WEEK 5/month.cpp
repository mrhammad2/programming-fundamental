#include<iostream>
using namespace std;
main(){

double salarypermonth = 10000;
double laptopprice = 50000;
double advancesalary = 0.5;
double monthsgiven = 6;

double advancepermonth = salarypermonth * advancesalary;
double totaladvance = advancepermonth * monthsgiven;

if(totaladvance >= laptopprice){
cout<<"Ali can buy the laptop:" <<endl;
}
else{
cout<<"ali cannot buy the laptop:" <<endl;

int requiremonths = (laptopprice / advancepermonth);
cout<<"months require to buy laptop:" <<requiremonths;
}
return 0;
}

