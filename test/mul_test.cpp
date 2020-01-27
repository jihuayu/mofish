#include "gtest/gtest.h"
#include <mofish.h>

TEST(mul_test, mul)
{
double res;
res = mul(1, 2);
ASSERT_NEAR(res, 2, 1.0e-11);
}
