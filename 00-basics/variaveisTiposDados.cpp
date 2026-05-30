#include <iostream>

int main()
{

    // Inteiros
    int a = 10;
    std::cout << "int: " << a << "\n";

    // Double -> 8 bytes
    double b = 10.10;
    std::cout << "double: " << b << "\n";

    // Ponto Flutuante -> 4 bytes
    float c = 10.4f;
    std::cout << "float: " << c << "\n";

    // Caracteres
    char d = 'c';
    std::cout << "char: " << d << "\n";

    // Booleans -> Verdadeiro ou Falso
    bool e = true;
    std::cout << "bool: " << e << "\n";

    // Strings -> Objeto que representa uma sequência de chars
    std::string f = "name";
    std::cout << "string: " << f << "\n";

    // Valor constante -> Não pode ser alterado
    const double PI = 3.14;
    std::cout << "PI: " << PI << "\n";

    // Cast -> Forçar um valor para outro tipo de dado
    double valor = 10.150;
    std::cout << (int)valor << "\n";
}