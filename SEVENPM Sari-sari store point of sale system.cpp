#include <iostream>
using namespace std;

int main()
{       
         float sugarPriceUSD, ricePricePound, sardinesPricePound, coffeePriceUSD, milkPriceUSD;
	 float USDtoPHP, PoundtoPHP, TotalPHP;
	 float SugarinPHP, RiceinPHP, SardinesinPHP, CoffeeinPHP, MilkinPHP;
	 int sugarQty, riceQty, sardinesQty, coffeeQty, milkQty;
	 	
	 cout << "Price of sugar in PHP:";	 
	 cin >> sugarPriceUSD;
	 cout << "Price of rice in PHP:";	 
	 cin >> ricePricePound;
	cout << "Price of sardines in PHP:";	 
	 cin >> sardinesPricePound;
	cout << "Price of coffee in PHP:";
	cin >> coffeePriceUSD;
	 cout << "Price of milk in PHP:";
	cin >> milkPriceUSD;
	
	
	cout << "Enter the quantity of sugar:";
	 cin >> sugarQty;
	 cout << "Enter the quantity of rice:";
	 cin >> riceQty;
	 cout << "Enter the quantity of sardines:";
	 cin >> sardinesQty;
	 cout << "Enter the quantity of coffee:";
	 cin >> coffeeQty;
	 cout << "Enter the quantity of milk:";
	 cin >> milkQty;	  	 

	SugarinPHP = sugarPriceUSD * USDtoPHP * sugarQty;
	RiceinPHP = ricePricePound * PoundtoPHP * riceQty;
	SardinesinPHP = sardinesPricePound * PoundtoPHP * sardinesQty;
	CoffeeinPHP = coffeePriceUSD * USDtoPHP * coffeeQty;
	MilkinPHP = milkPriceUSD * USDtoPHP * milkQty;

	TotalPHP = SugarinPHP + RiceinPHP + SardinesinPHP + CoffeeinPHP + MilkinPHP;

	cout << "Total price in PHP: " << TotalPHP << endl;	
	return 0;
}	 
