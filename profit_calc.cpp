#include <iostream>
#inclue <cstdlib>
using namespace std;

int main (void)
{
  string iName = "";
  float iCost = 0.0;
  float MSRP = 0.0;
  int iNumber = 0;
  float pMargin;

  cout << "Enter the products name: ";
  cin >> iName;
  cout << "Enter the products cost: ";
  cin >> iCost;
  cout << "Enter the products MSRP: ";
  cin >> MSRP;
  cout << "Enter the total number of the item: ";
  cin >> iNumber;
  system ("clear");

  pMargin = (MSRP - iCost) * iNumber;

  cout << "Item: " << iName << "\nCost: " << iCost
  << "\nMSRP: " << MSRP << "\nAmount: " << iNumber
  << "\nProfit: " << pMargin;
  return (0);
}
