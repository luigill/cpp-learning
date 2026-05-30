#include <iostream>

int main()
{
    int age = 0;
    std::cout << "Digite sua idade" << "\n";
    std::cin >> age;

    // ==, !=
    // <, >, <=, >=

    if (age < 18)
    {
        std::cout << "Você NÃO pode beber..." << "\n";
    }
    else
    {
        std::cout << "Bebida liberada!" << "\n";
    }
}