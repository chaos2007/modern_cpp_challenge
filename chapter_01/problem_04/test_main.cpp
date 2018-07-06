#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "my_math_lib.h"

TEST_CASE( "is_prime works", "[prime]" ) {
    REQUIRE( is_prime(1) == true);
    REQUIRE( is_prime(2) == true);
    REQUIRE( is_prime(3) == true);
    REQUIRE( is_prime(4) == false);
    REQUIRE( is_prime(5) == true);
    REQUIRE( is_prime(6) == false);
    REQUIRE( is_prime(7) == true);
}

TEST_CASE( "largest_prime_under works", "[prime]") {
    REQUIRE( largest_prime_below( 10 ) == 7 );
    REQUIRE( largest_prime_below( 100) == 97 );
}
