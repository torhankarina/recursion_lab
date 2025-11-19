#include <catch2/catch_test_macros.hpp>
#include <catch2/benchmark/catch_benchmark.hpp>
#include <catch2/benchmark/catch_constructor.hpp>
#include <catch2/generators/catch_generators_range.hpp>

#include "../src/calculator.hpp"

TEST_CASE("TriangleNumberCalculator basic functionality") {
    TriangleNumberCalculator calc;

    // value tests from main
    REQUIRE(calc.value(1) == 1);
    REQUIRE(calc.value(2) == 3);
    REQUIRE(calc.value(4) == 10);

    // extra value tests
    REQUIRE(calc.value(5) == 15);
    REQUIRE(calc.value(6) == 21);
}

TEST_CASE("TriangleNumberCalculator add method") {
    TriangleNumberCalculator calc;

    // add tests from main
    REQUIRE(calc.add(1, 1) == 2);
    REQUIRE(calc.add(2, 3) == 9);
    REQUIRE(calc.add(4, 2) == 13);

    // extra add tests
    REQUIRE(calc.add(3, 5) == 21);
    REQUIRE(calc.add(6, 1) == 22);
}

TEST_CASE("TriangleNumberCalculator subtract method") {
    TriangleNumberCalculator calc;

    // subtract tests from main
    REQUIRE(calc.subtract(1, 1) == 0);
    REQUIRE(calc.subtract(2, 3) == -3);
    REQUIRE(calc.subtract(4, 2) == 7);

    // extra subtract tests
    REQUIRE(calc.subtract(6, 1) == 20);
    REQUIRE(calc.subtract(5, 3) == 9);
}