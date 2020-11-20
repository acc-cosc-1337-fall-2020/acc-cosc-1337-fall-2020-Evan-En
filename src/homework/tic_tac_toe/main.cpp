#include<iostream>
#include<memory>
#include "tic_tac_toe.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"
#include "tic_tac_toe_manager.h"
using std::cout; using std::string; using std::cin; using std::unique_ptr; using std::make_unique;
int main() 
{
	TicTacToeData data;
	int totalGames = 0;
	int size;
	cout<<"Enter size 3 or 4: "<<"\n";
	cin>>size;
	if(size==3)
	{
		TicTacToe3 tic;
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
			cout<<"Enter position from 1 to "<<size*size<<": "<<"\n";
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
	}
	if(size==4)
	{
		TicTacToe4 tic;
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
			cout<<"Enter position from 1 to "<<size*size<<": "<<"\n";
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
	}
	return 0;
};