#include <iostream>
using namespace std;
int main() {
    int age;
    double money;
    bool parent;
    string show, moneyStatus;
    cout << "Enter age: ";
    cin >> age;
    cout << "With parent?[0=No, 1=Yes]: ";
    cin >> parent;
    show = (age < 13) ? (parent ? "PG & G show." : "G show.") : (age < 16) ? (parent ? "PG & G show." : "G show.") : (parent ? "R, PG & G show." : "PG & G show.");
    cout << "Enter money: ";
    cin >> money;
    moneyStatus = (money < 7.5) ? "Not enough money." : (money < 10.5) ? "Can go to matinee show." : "Can go to evening & matinee show.";
    cout << show << "\n" << moneyStatus << endl;
    return 0;
}