#include <iostream>
#include <vector>

// Como se fosse um apelido para um tipo de dados complexo
// typedef std::vector<std::pair<std::string, int>> pairlist_t;
// typedef std::string str_t;

// Normalmente se usa mais using
using str_t = std::string;

int main()
{
    str_t name = "Lui";
    std::cout << name << "\n";
    return 0;
}