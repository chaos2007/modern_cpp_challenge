#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "my_math_lib.h"

TEST_CASE( "sum_multiples wors", "[sum_multiples]" ) {
    REQUIRE( sum_multiples_of_3_and_5(3) == 3 );
    REQUIRE( sum_multiples_of_3_and_5(5) == 8 );
    REQUIRE( sum_multiples_of_3_and_5(6) == 14 );
}
