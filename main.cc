#include <ph/Literals.hpp>
#include <iostream>

int main()
{
    using namespace ph::literals;

    const auto amount = 1_m3 / 1_ml;

    std::cout << "There are " << amount << " milliliters in a cubic meter!" << std::endl;
    return 0;
}
