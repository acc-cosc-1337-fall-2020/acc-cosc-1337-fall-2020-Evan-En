#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "tic_tac_toe.h"
TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}
TEST_CASE("Check TicTacToe")
{
	TicTacToe tic;
	tic.start_game("X");
	for(int i = 1; i<9; i++)
	{
		tic.mark_board(i);
		REQUIRE(tic.game_over() == false);
	}
	tic.mark_board(9);
	REQUIRE(tic.game_over() == true);
}
