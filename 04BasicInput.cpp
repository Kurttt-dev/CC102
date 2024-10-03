#include<iostream>
using namespace std;

int main()
{
   string nickname,course,School;
   
   cout << "Nickname\t:\t";
   cin >> nickname;
   cout << "Course year level:\t";
   cin >> course;
   cout << "School\t:\t";
   cin >> School;
   cout << "wow congrats " << nickname << "! " << course << "is a nice course,and you are studying in" << School <<" which is one of the center of excellence tertiary Education";
   return 0;
}   