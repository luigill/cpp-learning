#include <iostream>

int main()
{

    int a = 10;
    int b = 2;

    std::cout << "SOMA: " << a + b << "\n";
    std::cout << "SUBTRACAO: " << a - b << "\n";
    std::cout << "MULTIPLICACAO: " << a * b << "\n";
    std::cout << "DIVISAO: " << a / b << "\n";
    std::cout << "RESTO DA DIVISAO: " << a % b << "\n";

    int c = 3;
    std::cout << "C: " << c++ << "\n"; // soma depois da operação
    std::cout << "C: " << c << "\n";   // resultado atualizado

    std::cout << "C: " << ++c << "\n"; // soma e atualiza na mesma operacao

    std::cout << "C: " << c-- << "\n"; // pode ser utilizado com outras operações também

    return 0;
}