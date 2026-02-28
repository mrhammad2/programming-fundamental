#include <iostream>
using namespace std;
main()

{

   int worldpopulation;
   cout<<" Enter the current world population:";
   cin>>worldpopulation;

   

   int birth;
   cout<<" Enter the monthly birth rate (number of births per month):";
   cin>>birth;

   int population;
   population = worldpopulation + (birth*360);

   cout<<" Population in three decades will be: " << population;

}