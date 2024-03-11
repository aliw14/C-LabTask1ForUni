#include <iostream>

int main() {
    double tjsToAznExchangeRate = 0.062;  
    double uahToAznExchangeRate = 0.23;   
    double tryToAznExchangeRate = 0.13;   

    double tjsAmount, uahAmount, tryAmount;

    std::cout << "Enter the amount in TJS: ";
    std::cin >> tjsAmount;

    std::cout << tjsAmount << " TJS is equivalent to " << tjsAmount * tjsToAznExchangeRate << " AZN." << std::endl;

    std::cout << "Enter the amount in UAH: ";
    std::cin >> uahAmount;

    std::cout << uahAmount << " UAH is equivalent to " << uahAmount * uahToAznExchangeRate << " AZN." << std::endl;

    std::cout << "Enter the amount in TRY: ";
    std::cin >> tryAmount;

    std::cout << tryAmount << " TRY is equivalent to " << tryAmount * tryToAznExchangeRate << " AZN." << std::endl;

    return 0;
}
