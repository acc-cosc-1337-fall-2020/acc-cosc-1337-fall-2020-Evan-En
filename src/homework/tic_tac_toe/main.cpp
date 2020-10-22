#include<iostream>
#include "tic_tac_toe.h"
using std::cout; using std::string; using std::cin;
int main() 
{
	TicTacToe tic;
	int position;
	string player;
	cout<<"Enter the first player: "<<"\n";
	cin>>player;
	if(player == "x")
	{
		player = "X";
	}
	if(player == "y")
	{
		player = "Y";
	}
	tic.start_game(player);
	bool c = true;
	while(c == true)
	{
		cout<<"Enter a position: "<<"\n";
		cin>>position;
		tic.mark_board(position);
		tic.display_board();
	}
	return 0;
}