#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "question1.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("test")
{
	REQUIRE(test_config() == true);
}


TEST_CASE("Test get_value function")
{
	int value = 10;
	get_value(value);
	REQUIRE(value == 10);
}

TEST_CASE("Test get_value_reference funciton")
{
	int value = 10;
	get_value_reference(value);
	REQUIRE(value == 5);
}