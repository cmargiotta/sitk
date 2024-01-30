#include "stk.hpp"

#include <catch2/catch_test_macros.hpp>

TEST_CASE("Exact matchers merging")
{
    struct test
    {
            int field1;
    };

    constexpr bool result = has_member(field1, test);

    REQUIRE(result);
}
