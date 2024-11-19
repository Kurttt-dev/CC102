#include <iostream>
using namespace std;
int main() {
    int age;
    double money;
    bool parent;
    string toPrintShow, toPrintMoney;
    cout << "Enter age: ";
    cin >> age;
    cout << "With Parent[0=No, 1=Yes]:";
    cin >> parent;
    if (age < 13) {
        toPrintShow = parent ? "PG & G show." : "G show.";
    } else if (age < 16) {
        toPrintShow = parent ? "PG & G show." : "G show.";
    } else {
        toPrintShow = parent ? "R, PG & G show." : "PG & G show.";
    }
    cout << "Enter money: ";
    cin >> money;
    if (money < 7.5) {
        toPrintMoney = "Not enough money.";
    } else if (money < 10.5) {
        toPrintMoney = "Can go to matinee show.";
    } else {
        toPrintMoney = "Can go to evening & matinee show.";
    }
    cout << toPrintShow << endl;
    cout << toPrintMoney << endl;
    return 0;
}