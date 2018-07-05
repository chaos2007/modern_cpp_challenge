#include <iostream>
#include "my_math_lib.h"

int main()
{
    int user_num;
    std::cout << "Give me a number to sum all multiples? ";
    std::cin >> user_num;
    auto result = sum_multiples_of_3_and_5(user_num);
    std::cout << result;
    return 0;
}