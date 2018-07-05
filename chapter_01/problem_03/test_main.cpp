#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "my_math_lib.h"

TEST_CASE( "least_common_multiple works", "[lcm]" ) {
    REQUIRE( least_common_multiple(std::vector<int>{2, 3}) == 6);
    REQUIRE( least_common_multiple(std::vector<int>{6, 10}) == 30);
    REQUIRE( least_common_multiple(std::vector<int>{12, 30}) == 60);
    REQUIRE( least_common_multiple(std::vector<int>{24, 300}) == 600);
    REQUIRE( least_common_multiple(std::vector<int>{65, 10, 5}) == 130);
}
