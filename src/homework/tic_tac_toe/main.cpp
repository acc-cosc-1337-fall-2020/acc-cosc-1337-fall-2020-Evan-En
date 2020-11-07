#include<iostream>
#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"
using std::cout; using std::string; using std::cin;
int main() 
{
	int totalGames = 0;
	TicTacToe tic;
	TicTacToeManager man;
	int position;
	string player;
	string ans;
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
			man.save_game(tic);
			c = false;
			cout<<"Game Over"<<"\n";
			cout<<tic.get_winner()<<" Wins."<<"\n";
			cout<<"Play again? Y/N"<<"\n";
			cin>> ans;
			totalGames++;
			if(ans == "Y" || ans == "y")
			{
				c = true;
				tic.start_game("X");
			}
			else
			{
				cout<<"Total games played: "<<totalGames<<"\n";
			}
			
		}
	}
	return 0;
}