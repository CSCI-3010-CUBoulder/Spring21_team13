#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "functions_to_implement.cpp"

TEST_CASE("The sign of a number is computed","[sign]"){
    REQUIRE(Sign(0.0) == 0);
    REQUIRE(Sign(5.0) == 1);
    REQUIRE(Sign(-5.0) == -1);
}