#include "./app.hpp"

#include "gtest/gtest.h"

TEST(TApp, Basic) {
  cli::app app{"name", "description"};

  EXPECT_EQ(app.name, "name");
  EXPECT_EQ(app.description, "description");
}
