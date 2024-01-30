#include "stk.hpp"

#include <catch2/catch_test_macros.hpp>

TEST_CASE("Base case")
{
    struct test
    {
            int field1;
    };

    constexpr bool result = has_member(field1, test);

    REQUIRE(result);
}

template<typename T>
auto check() -> bool
    requires(has_member(field1, T))
{
    return true;
}

TEST_CASE("Use as constraint")
{
    struct test
    {
            int field1;
    };

    constexpr bool result = has_member(field1, test);

    REQUIRE(result);
}