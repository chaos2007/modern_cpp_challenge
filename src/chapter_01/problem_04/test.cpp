#include "catch.hpp"
#include "my_math_lib.h"

TEST_CASE( "is_prime works", "[prime]" ) {
    REQUIRE( is_prime(1) );
    REQUIRE( is_prime(2) );
    REQUIRE( is_prime(3) );
    REQUIRE( !is_prime(4) );
    REQUIRE( is_prime(5) );
    REQUIRE( !is_prime(6) );
    REQUIRE( is_prime(7) );
}

TEST_CASE( "largest_prime_under works", "[prime]") {
    REQUIRE( largest_prime_below( 10 ) == 7 );
    REQUIRE( largest_prime_below( 100) == 97 );
}
