#include<iostream>
#include "tic_tac_toe.h"
using std::cout; using std::string; using std::cin;
int main() 
{
	TicTacToe tic;
	int position;
	string player;
	cout<<"Enter X or O: "<<"\n";
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
		cout<<"Enter position from 1 to 9: "<<"\n";
		cin>>position;
		tic.mark_board(position);
		tic.display_board();
		if(tic.game_over())
		{
			c = false;
			cout<<"Game Over"<<"\n";
		}
	}
	return 0;
}