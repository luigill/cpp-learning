#include <iostream>

int main()
{
    // Variáveis são abstrações para espaços de memória
    // Elas armazenam informações usadas nos programas.

    int x = 10;
    int width{5};       // Já inicializa a variável com o valor 5
    std::cout << x;     // Output: 10
    std::cout << width; // Output: 5
}