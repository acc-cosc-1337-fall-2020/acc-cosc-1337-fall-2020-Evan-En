//h
#include<iostream>
#include<vector>
#include "tic_tac_toe.h"
using std::string; using std::cout;
class TicTacToeManager
{
    private:
        std::vector<TicTacToe> games;
        int x_win = 0;
        int o_win = 0;
        int ties = 0;
        void update_winner_count(string winner)
        {
            if(winner == "X")
            {
                x_win++;
            }
            else if(winner == "O")
            {
                o_win++;
            }
            else
            {
                ties++;
            }
        }
    public:
        friend std::ostream& operator<<(std::ostream& out, const TicTacToeManager& manager);
        //tictactoe SHOULD be const i guess
        void save_game(TicTacToe b)
        {
            games.push_back(b);
            update_winner_count(b.get_winner());
            cout<<"X wins "<<x_win<<", O wins "<<o_win<<", Ties "<<ties<<"\n";
        }
        void get_winner_total(int& x, int& o, int& t)
        {
            x_win = x;
            o_win = o;
            ties = t;
        }
};