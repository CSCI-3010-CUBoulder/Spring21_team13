#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "functions_to_implement.cpp"
#include <vector>


TEST_CASE("Sum of all number", "[Sum]") {
    std::vector<int> v{1,2,3,4,5};
    std::vector<int> v2{1,2,3,4,5,6,7,8,9,10};

    SECTION("checking with vector size 5") {
        REQUIRE(Sum(v) == 15);
    }
    SECTION("checking with vector size 10") {
        REQUIRE(Sum(v2) == 55);
    }
}

TEST_CASE("Check sign of number", "[Sign]") {
    int positive = 4;
    int negative = -20;

    SECTION("checking with positive number") {
        REQUIRE(Sign(positive) == 1);
    }
    SECTION("checking with negative number") {
        REQUIRE(Sign(negative) == -1);
    }

}
