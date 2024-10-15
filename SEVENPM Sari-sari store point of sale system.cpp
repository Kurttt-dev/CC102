#include <iostream>
using namespace std;

int main()
{       
     float sugarPriceUSD=3.00, ricePricePound=1.06, sardinesPricePound=0.57, coffeePriceUSD=3.23, milkPriceUSD=4.12;
	 float USDtoPHP, PoundstoPHP, TotalPHP;
	 float sugarinPHP=567, riceinPHP=60.91, sardinesinPHP=40, coffeeinPHP=160, milkinPHP=206;
	 int sugarQty, riceQty, sardinesQty, coffeeQty, milkQty;
	 
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
	  
	 //usd conversion//
	 USDtoPHP, PoundstoPHP, TotalPHP;
	 
	 cout << "Price of sugar in PHP:";	 
	 cout << "Price of rice in PHP:";	 
	 cout << "Price of sardines in PHP:";	 
	 cout << "Price of coffee in PHP:";	 
	 cout << "Price of milk in PHP:";	 
	 cout << "TotalPHP:";
	 cin >> TotalPHP;
	 return 0;
}	 