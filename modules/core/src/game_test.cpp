#include "game.h"

#include <gtest/gtest.h>

namespace origami {

TEST(GameTest, Add) {
  Game game;
  game.Add(1, 2);
  EXPECT_EQ(game.Add(1, 2), 3);
}

}  // namespace origami
