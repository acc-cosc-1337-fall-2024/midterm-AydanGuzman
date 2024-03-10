#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "question3.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("test")
{
	REQUIRE(test_config() == true);
}

TEST_CASE("Test get_dna_p_distance function")
{
	REQUIRE(get_dna_p_distance("GAGCCTACTAACGGGAT", "CATCGTAATGACGGCCT") == .4118);
	REQUIRE(get_dna_p_distance("GAGCCTACTAACGGGAT", "GATCGTAATGACGGCCT") == .3529);
}