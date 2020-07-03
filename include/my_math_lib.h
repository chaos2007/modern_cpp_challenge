#ifndef MY_MATH_LIB_H_
#define MY_MATH_LIB_H_

#include <numeric>
#include <vector>
#include <list>

unsigned long sum_multiples_of_3_and_5(long max_number);

int greatest_common_divisor(int num_1, int num_2);

int lcm(int num_1, int num_2);

int least_common_multiple(std::vector<int> numbers);

bool is_prime(int number);

int largest_prime_below(int number);

std::list<std::pair<int, int> > get_sexy_prime(int limit);

std::pair<bool, int> get_abundance(int number);

std::list<std::pair<int, int> > get_abundant_pairs(int limit);

#endif //MY_MATH_LIB_H_
