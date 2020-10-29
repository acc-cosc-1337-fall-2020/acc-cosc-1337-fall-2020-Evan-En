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
	//Try to get a tie because if you just mark in order x will always win so game over will be true before it ends
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
	TicTacToe tic;
	tic.start_game("X");
	REQUIRE(tic.get_player()=="X");
}
TEST_CASE("Test first player set to O")
{
	TicTacToe tic;
	tic.start_game("O");
	REQUIRE(tic.get_player()=="O");
}
TEST_CASE("Test win by first column")
{
	TicTacToe tic;
	tic.start_game("X");
}
TEST_CASE("Test win by second column")
{
	TicTacToe tic;
	tic.start_game("X");
}
TEST_CASE("Test win by third column")
{
	TicTacToe tic;
	tic.start_game("X");
}
TEST_CASE("Test win by first row")
{
	TicTacToe tic;
	tic.start_game("X");
}
TEST_CASE("Test win by second row")
{
	TicTacToe tic;
	tic.start_game("X");
}
TEST_CASE("Test win by third row")
{
	TicTacToe tic;
	tic.start_game("X");
}
TEST_CASE("Test win diagonally by top left")
{
	TicTacToe tic;
	tic.start_game("X");
}
TEST_CASE("Test win diagonally by top right")
{
	TicTacToe tic;
	tic.start_game("X");
}