#include <iostream>
#include "my_math_lib.h"

int main()
{
    int num_1, num_2;
    std::cout << "Give me two numbers to determine common divisor? ";
    std::cin >> num_1 >> num_2;
    auto result = greatest_common_divisor(num_1, num_2);
    std::cout << result;
    return 0;
}