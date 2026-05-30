#include <iostream>
#include <cmath>

int main()
{

    double cat1 = 0.0;
    double cat2 = 0.0;
    double hyp = 0.0;

    std::cout << "Digite o valor do primeiro cateto: " << "\n";
    std::cin >> cat1;
    std::cout << "Digite o valor do segundo cateto: " << "\n";
    std::cin >> cat2;

    hyp = sqrt(pow(cat1, 2) + pow(cat2, 2));

    std::cout << "Valor da hipotenusa: " << hyp << "\n";
}