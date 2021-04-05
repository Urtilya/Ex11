// Copyright 2021 GHA Test Team
#include <gtest/gtest.h>
#include <string>
#include "train.h"

TEST(MyStackTest, test1) {
  Train a(5);
  EXPECT_EQ(5, a.get());
}

TEST(MyStackTest, test2) {
  Train a(2);
  EXPECT_EQ(2, a.get());
}

TEST(MyStackTest, test3) {
  Train a(9);
  EXPECT_EQ(9, a.get());
}

