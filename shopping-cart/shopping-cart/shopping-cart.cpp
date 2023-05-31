#include <iostream>
using namespace std;

string userInput;
string brand;
int price;

void productDisplay() {
    std::cout << "Items in the shopping cart:" << std::endl;
    std::cout << "- " << userInput << "(" << brand << ")";
}

int main()
{

while (true) 
    {
        std::cout << "Enter the product name (or 'exit' to finish): ";
        std::cin >> userInput;
        std::cout << "Enter the product brand: ";
        std::cin >> brand;
        std::cout << "Enter the product price: ";
        std::cin >> price;

        std::cout << "Added " << userInput << " to the shopping cart.\n" << std::endl;

        if (userInput == "exit")
        {
            false;
            productDisplay();
        }
    }
}