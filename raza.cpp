#include <iostream>
#include <cmath>

int main(void)
{
    float n = 1234.5678;
    static const int bits = 8;
    int  num;

    num = static_cast<int>(42.123456789 * (2 << 8));
    std::cout << num << std::endl;
    std::cout << std::roundf(42.123456789f) << std::endl;
    std::cout << std::roundf(n * ( 1 << bits ) ) << std::endl;
    std::cout << ((int)n >> bits) << std::endl;
}