#include <iostream>
#include <cmath>

int main()
{

    double x = 3.14;
    double y = 4;
    double z;

    // Máximos e mínimos entre dois números
    z = std::max(x, y);
    std::cout << "Valor máximo: " << z << "\n";
    z = std::min(x, y);
    std::cout << "Valor mínimo: " << z << "\n";

    // Potência
    z = pow(y, 2); // x elevado na 2
    std::cout << "x ** 2: " << z << "\n";

    // Raíz quadrada
    z = sqrt(9); // raíz de 9
    std::cout << "raíz de x: " << z << "\n";

    // Valor absoluto
    z = abs(-100);
    std::cout << "absoluto de x: " << z << "\n";

    // Arredondamento
    z = round(x);
    std::cout << "x arredondado: " << z << "\n";
    z = ceil(x); // pra cima
    std::cout << "x arredondado: " << z << "\n";
    z = floor(x); // pra baixo
    std::cout << "x arredondado: " << z << "\n";

    return 0;
}