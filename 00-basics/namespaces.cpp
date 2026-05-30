#include <iostream>

namespace first
{
    int x = 0;
}

namespace second
{
    int x = 1;
}

int main()
{
    // namespace -> permite a duplicação de entidades, desde que cada uma esteja em um namespace diferente

    // tira a necessidade de usar o std
    using namespace std;
    // using std::cout;
    // using std::string;

    cout << "Hello" << "\n";

    cout << first::x << "\n";
    cout << second::x << "\n";

    return 0;
}