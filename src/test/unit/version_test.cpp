#include <stan/version.hpp>
#include <gtest/gtest.h>

TEST(Stan, macro) {
  EXPECT_EQ(2, STAN_MAJOR);
  EXPECT_EQ(28, STAN_MINOR);
  EXPECT_EQ(2, STAN_PATCH);
}

TEST(Stan, version) {
  EXPECT_EQ("2", stan::MAJOR_VERSION);
  EXPECT_EQ("28", stan::MINOR_VERSION);
  EXPECT_EQ("2", stan::PATCH_VERSION);
}
