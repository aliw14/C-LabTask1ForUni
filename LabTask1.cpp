#include <iostream>
using namespace std;

int main() {
    double tjsToAznExchangeRate= 0.062,uahToAznExchangeRate = 0.23,tryToAznExchangeRate = 0.13;
    
    double amount;

    cout << "Enter the amount in TJS: ";
    cin >> amount;

    cout << amount << " TJS is equivalent to " << amount * tjsToAznExchangeRate << " AZN." << endl;

    cout << "Enter the amount in UAH: ";
    cin >> amount;

    cout << amount << " UAH is equivalent to " << amount * uahToAznExchangeRate << " AZN." << endl;

    cout << "Enter the amount in TRY: ";
    cin >> amount;

    cout << amount << " TRY is equivalent to " << amount * tryToAznExchangeRate << " AZN." << endl;

    return 0;
}


