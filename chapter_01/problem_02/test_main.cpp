#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "greatest_common_divisor.h"

TEST_CASE( "greatest_common_divisor_works", "[gcd]" ) {
    REQUIRE( greatest_common_divisor(15, 5) == 5 );
    REQUIRE( greatest_common_divisor(32, 64) == 32 );
}
