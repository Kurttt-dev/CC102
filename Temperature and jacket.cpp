#include <iostream>
using namespace std;
int main()
{
   int temp;
   
   cout << "what is the current temperature" << endl;
   cin >> temp;
   if (temp <32) {
       cout << " Bring a heavy jacket" << endl;
   }
   else if(temp >= 32 && temp <=50 ){
   
   cout << "Bring a light jacket" << endl;
   }
   else{
       cout << "don't bring a jacket" << endl;
   }
   
   return 0;
}   