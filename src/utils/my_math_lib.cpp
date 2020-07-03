#include "my_math_lib.h"

unsigned long sum_multiples_of_3_and_5(long max_number)
{
    unsigned long sum = 0;
    for(long x = 3; x <= max_number; x++) {
        if( x % 3 == 0 || x % 5 == 0) 
        {
            sum += x;
        }
    }
    return sum;
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

std::list<std::pair<int, int> > get_sexy_prime(int limit)
{
    std::list<std::pair<int, int> > result;
    for(auto number = 2; number+6 < limit; number++)
    {
        if(is_prime(number) && is_prime(number+6))
        {
            result.push_back(std::make_pair(number, number+6));
        }
    }
    return result;
}

std::pair<bool, int> get_abundance(int number)
{
    return std::make_pair(false, 0);
}

std::list<std::pair<int, int> > get_abundant_pairs(int limit)
{
    std::list<std::pair<int, int> > result;
    return result;
}
