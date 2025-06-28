#include "game.h"

#include <gtest/gtest.h>

TEST(GameTest, Add) {
  Game game;
  game.Add(1, 2);
  EXPECT_EQ(game.Add(1, 2), 3);
}
