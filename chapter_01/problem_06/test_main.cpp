#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "my_math_lib.h"

TEST_CASE( "get_abundance", "[abundant_numbers]" ) {
   auto ret_val = get_abundance(11);
   REQUIRE( ret_val.first == false );
   ret_val = get_abundance(12);
   REQUIRE( ret_val.first == true );
   REQUIRE( ret_val.second == 4 );
}


TEST_CASE( "get_abundant_pairs", "[abundant_numbers]" ) {
    std::list<std::pair<int,int> > expected = {
            std::make_pair(12, 4)
    };
    REQUIRE( get_abundant_pairs(12) == expected );
}
