#include <iostream>
#include "catch.hpp"

int sum(int a, int b)
{
    return a + b;
}

TEST_CASE("Factorials are computed", "[factorial]")
{
    REQUIRE (sum(2, 5) == 7);
}