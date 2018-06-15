#ifndef CPPCHALLENGER_SUM_MULTIPLES_H
#define CPPCHALLENGER_SUM_MULTIPLES_H

#include <boost/range/irange.hpp>

auto sum_multiples_of_3_and_5(auto max_number)
{
    auto num_range = boost::irange(3, max_number + 1);
    auto add_multiples = [](auto acc, auto num) {return (num % 3 == 0 || num % 5 == 0) ? acc + num : acc;};
    return std::accumulate(num_range.begin(), num_range.end(), 0, add_multiples);
}


#endif //CPPCHALLENGER_SUM_MULTIPLES_H
