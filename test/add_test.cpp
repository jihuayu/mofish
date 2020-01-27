#include "gtest/gtest.h"
#include <mofish.h>

TEST(add_test, add)
{
    double res;
    res = add(1, 2);
    ASSERT_NEAR(res, 3, 1.0e-11);
}
