#include <iostream>

int main()
{
    // Dados podem ser de diferentes tipos:

    // int = números inteiros
    int x = 10;
    std::cout << x << "\n";

    // float = ponto flutuante em precisão simples
    float pi = 3.14;
    std::cout << pi << "\n";

    // double = ponto flutuante em precisão dupla
    double y = 28888009.8695076;
    std::cout << y << "\n";

    // char = caracter simples
    char letter = 'p';
    std::cout << letter << "\n";

    // bool = Valor Verdadeiro ou Falso
    bool condition = true;
    std::cout << condition << "\n";

    // arrays = Armazenam uma coleção de elementos do mesmo tipo
    int number[5] = {0, 1, 2, 3, 4};
    char word[6] = "hello";

    // Strings são uma sequência de chars, são disponibilizadas por padrão 
    std::string name = "Lui";
    std::cout << name << "\n";

    return 0;
}