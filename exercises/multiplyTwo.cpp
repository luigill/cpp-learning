#include <iostream>

int main()
{

    int value { 0 };

    // Recebe o valor de entrada do usuário
    std::cout << "Enter a number: ";
    std::cin >> value;

    // O uso da expressão diretamente torna o programa mais eficiente
    std::cout << "Double that number is: " << value * 2 << "\n";

    return 0;
}
