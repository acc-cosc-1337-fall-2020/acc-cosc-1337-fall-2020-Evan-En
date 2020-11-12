#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "tic_tac_toe.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"
TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}
TEST_CASE("Check TicTacToe")
{
	TicTacToe3 tic;
	tic.start_game("X");
	tic.mark_board(2);
	REQUIRE(tic.game_over() == false);
	tic.mark_board(1);
	REQUIRE(tic.game_over() == false);
	tic.mark_board(5);
	REQUIRE(tic.game_over() == false);
	tic.mark_board(3);
	REQUIRE(tic.game_over() == false);
	tic.mark_board(6);
	REQUIRE(tic.game_over() == false);
	tic.mark_board(4);
	REQUIRE(tic.game_over() == false);
	tic.mark_board(7);
	REQUIRE(tic.game_over() == false);
	tic.mark_board(8);
	REQUIRE(tic.game_over() == false);
	tic.mark_board(9);
	REQUIRE(tic.game_over() == true);
	REQUIRE(tic.get_winner() == "C");
}
TEST_CASE("Test first player set to X")
{
	TicTacToe3 tic;
	tic.start_game("X");
	REQUIRE(tic.get_player()=="X");
}
TEST_CASE("Test first player set to O")
{
	TicTacToe3 tic;
	tic.start_game("O");
	REQUIRE(tic.get_player()=="O");
}
TEST_CASE("Test win by first column")
{
	TicTacToe3 tic;
	tic.start_game("X");
}
TEST_CASE("Test win by second column")
{
	TicTacToe3 tic;
	tic.start_game("X");
}
TEST_CASE("Test win by third column")
{
	TicTacToe3 tic;
	tic.start_game("X");
}
TEST_CASE("Test win by first row")
{
	TicTacToe3 tic;
	tic.start_game("X");
}
TEST_CASE("Test win by second row")
{
	TicTacToe3 tic;
	tic.start_game("X");
}
TEST_CASE("Test win by third row")
{
	TicTacToe3 tic;
	tic.start_game("X");
}
TEST_CASE("Test win diagonally by top left")
{
	TicTacToe3 tic;
	tic.start_game("X");
}
TEST_CASE("Test win diagonally by top right")
{
	TicTacToe3 tic;
	tic.start_game("X");
}
TEST_CASE("Check TicTacToe but 4x4")
{
	TicTacToe4 tic;
	tic.start_game("X");
	tic.mark_board(0);
	REQUIRE(tic.game_over() == false);
	tic.mark_board(1);
	REQUIRE(tic.game_over() == false);
	tic.mark_board(2);
	REQUIRE(tic.game_over() == false);
	tic.mark_board(3);
	REQUIRE(tic.game_over() == false);
	tic.mark_board(4);
	REQUIRE(tic.game_over() == false);
	tic.mark_board(5);
	REQUIRE(tic.game_over() == false);
	tic.mark_board(6);
	REQUIRE(tic.game_over() == false);
	tic.mark_board(7);
	REQUIRE(tic.game_over() == false);
	tic.mark_board(8);
	REQUIRE(tic.game_over() == false);
	tic.mark_board(9);
	REQUIRE(tic.game_over() == false);
	tic.mark_board(10);
	REQUIRE(tic.game_over() == false);
	tic.mark_board(11);
	REQUIRE(tic.game_over() == false);
	tic.mark_board(13);
	REQUIRE(tic.game_over() == false);
	tic.mark_board(12);
	REQUIRE(tic.game_over() == false);
	tic.mark_board(15);
	REQUIRE(tic.game_over() == false);
	tic.mark_board(14);
	REQUIRE(tic.game_over() == true);
	REQUIRE(tic.get_winner() == "C");
}