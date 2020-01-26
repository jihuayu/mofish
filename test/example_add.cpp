#include "gtest/gtest.h"
#include "example.h"
#pragma warning(disable:4996)
TEST(example, add)
{
    double res;
    res = add(1, 2);
    ASSERT_NEAR(res, 3, 1.0e-11);
}
