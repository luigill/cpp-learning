#include <iostream>

int main()
{

    // Valor que não pode ser alterado
    const double PI = 3.14159;
    double radius = 10;
    double circumference = 2 * PI * radius;

    std::cout << circumference << "cm";

    return 0;
}