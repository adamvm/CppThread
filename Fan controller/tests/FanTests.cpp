#define CATCH_CONFIG_MAIN
#include "external/catch.hpp"
#include "Fan.hpp"

TEST_CASE("Fan - setSpeed() behavior", "[Fan]") {

    Fan f{};
    auto disabledRpm = 0;
    auto minRpm = 1000;
    auto maxRpm = 3000;

    SECTION("created fan is disabled") {
        CHECK(f.getSpeed() == disabledRpm);
    }
    
    SECTION("setting proper values") {
        f.setSpeed(minRpm);
        CHECK(f.getSpeed() == minRpm);

        f.setSpeed(maxRpm);
        CHECK(f.getSpeed() == maxRpm);

        f.setSpeed(disabledRpm);
        CHECK(f.getSpeed() == disabledRpm);
    }

    SECTION("setting invalid values") {
        auto before = f.getSpeed();
        
        REQUIRE_THROWS_AS(f.setSpeed(minRpm - 1), std::invalid_argument);
        CHECK(f.getSpeed() == before);

        REQUIRE_THROWS_AS(f.setSpeed(maxRpm + 1), std::invalid_argument);
        CHECK(f.getSpeed() == before);
    }
}