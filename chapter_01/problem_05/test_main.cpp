#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "my_math_lib.h"
#include <list>

TEST_CASE( "is_prime works", "[sexy_prime]" ) {
    std::list<std::pair<int,int> > expected = {
            std::make_pair(5, 11)
    };
    REQUIRE( get_sexy_prime(12) == expected );
    expected = {
            std::make_pair(5, 11),
            std::make_pair(7, 13)
    };
    REQUIRE( get_sexy_prime(14) == expected );
    expected = {
            std::make_pair(5, 11),
            std::make_pair(7, 13),
            std::make_pair(11, 17),
            std::make_pair(13, 19),
            std::make_pair(17, 23),
            std::make_pair(23, 29),
            std::make_pair(31, 37)
    };
    REQUIRE( get_sexy_prime(42) == expected );
}
