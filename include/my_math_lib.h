#ifndef MY_MATH_LIB_H_
#define MY_MATH_LIB_H_

#include <numeric>
#include <boost/range/irange.hpp>

unsigned long sum_multiples_of_3_and_5(auto max_number)
{
    auto num_range = boost::irange(3, max_number + 1);
    auto add_multiples = [](unsigned long acc, auto num) {return (num % 3 == 0 || num % 5 == 0) ? acc + num : acc;};
    return std::accumulate(num_range.begin(), num_range.end(), 0, add_multiples);
}

int greatest_common_divisor(int num_1, int num_2)
{
    if( num_2 == 0 ) {
        return num_1;
    }
    if( num_1 == 0 ) {
        return num_2;
    }
    return greatest_common_divisor(num_2, num_1 % num_2);
}

int lcm(int num_1, int num_2)
{
    return (num_1 * num_2) / greatest_common_divisor(num_1, num_2);
}

int least_common_multiple(std::vector<int> numbers)
{
    return std::accumulate(numbers.begin(), numbers.end(), 1, lcm);
}

bool is_prime(int number)
{
    if(number >= 1 and number <= 3)
    {
        return true;
    }
    for( int current = 2; current * current <= number; current++) {
        if (number % current == 0)
        {
            return false;
        }
    }
    return true;
}

int largest_prime_below(int number)
{
    for( int current = number - 1; current > 0; current--)
    {
        if( is_prime(current) )
        {
            return current;
        }
    }
    return 0;
}

#endif //MY_MATH_LIB_H_
