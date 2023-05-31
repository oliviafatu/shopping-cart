#include <iostream>
using namespace std;

int main()
{
    string userInput;
    int price;

    while (true) {
        std::cout << "Enter the product name (or 'exit' to finish): ";
        std::cin >> userInput;
        std::cout << "\nEnter the product brand: ";
        std::cin >> userInput;
        std::cout << "\nEnter the product price: ";
        std::cin >> price;

        std::cout << "Added " << userInput << " to the shopping cart";

        if (userInput == "exit")
        {
            false;
            exit(0);
        }
    }
}