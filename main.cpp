//Zachary Hoppock
//coinCount.cpp
//9/17/2020
//Count the number of coins and add up the total of them
//Version #1
#include <iostream>
using namespace std;

/* Your work goes here--use // or */ /* as appropriate */
int main()
{  
   cout << "How many pennies do you have? ";
   int pennies;
   cin >> pennies;

   cout << "How many nickels do you have? ";
   int nickels;
   cin >> nickels;

   cout << "How many dimes do you have? ";
   int dimes;
   cin >> dimes;

   cout << "How many quarters do you have? ";
   int quarters;
   cin >> quarters;
  // >This is where I will add an extra coin prompt that will ask for the number of golden dollar coins one has.
   cout << "How many golden dollar coins do you have? ";
   int dollar_coins;
   cin >> dollar_coins;

  // >In the total calculation, I will include the amount of dollar coins to get added up.  Each dollar coin will be multiplied by its value of 1.00.
   double total = pennies * 0.01 + nickels * 0.05
       + dimes * 0.10 + quarters * 0.25 + dollar_coins * 1.00;
   // Total value of the coins 

   cout << "Total value = $" << total << "\n";
   return 0;
}
/*      The program counts the number of each type of coin you have and then calculates the total value of those coins combined.  Coins represented here are pennies, nickels, dimes, and quarters.      */