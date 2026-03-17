#include<iostream>
using namespace std;
main(){

string name1, name2, name3;
int age1, age2, age3;

cout<< "enter name of brother 1:";
cin>>name1;
cout<< "enter age of brother 1:";
cin>>age1;

cout<< "enter name of brother 2:";
cin>>name2;
cout<< "enter the age of brother 2:";
cin>>age2;

cout<< "enter name of brother 3:";
cin>> name3;
cout<< "enter the age of brother 3:";
cin>>age3;

cout<< "\n--- Result ---\n";

if(age1 < age2 && age1 < age3){
cout<< "the youngest brother is:" <<name1;
}

else if(age2 < age3 && age2 < age1){
 cout<< "the youngest brother is:" <<name2;
}
else if(age3 < age2 && age3 < age1){
 cout<< "the youngest brother is:" <<name3;
}
else{
cout<< "they all have same ages!";
}
return 0;
}