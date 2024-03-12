#include <iostream>
using namespace std

int main() {
    double tjsToAznExchangeRate = 0.062;  
    double uahToAznExchangeRate = 0.23;   
    double tryToAznExchangeRate = 0.13;   

    double tjsAmount, uahAmount, tryAmount;

    cout << "Enter the amount in TJS: ";
    cin >> tjsAmount;

    cout << tjsAmount << " TJS is equivalent to " << tjsAmount * tjsToAznExchangeRate << " AZN." << endl;

    cout << "Enter the amount in UAH: ";
    cin >> uahAmount;

    cout << uahAmount << " UAH is equivalent to " << uahAmount * uahToAznExchangeRate << " AZN." << endl;

    cout << "Enter the amount in TRY: ";
    cin >> tryAmount;

    cout << tryAmount << " TRY is equivalent to " << tryAmount * tryToAznExchangeRate << " AZN." << endl;

    return 0;
}
