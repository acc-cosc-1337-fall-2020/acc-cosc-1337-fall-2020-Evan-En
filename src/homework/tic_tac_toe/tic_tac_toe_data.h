#include<iostream>
#include<vector>
#include<memory>
#include<fstream>
#include "tic_tac_toe.h"
class TicTacToeData
{
    public:
        void save_games(const std::vector<std::unique_ptr<TicTacToe>>& games) 
        {
            std::ofstream out_file;
            //maybe different name
            out_file.open("tictactoe.dat");
            for(int i = 0; i<games.size(); i++)
            {
                out_file<<games[i]->get_player()<<"\n";
            }
            out_file<<games[0]->get_winner()<<"\n";
            out_file.close();
        }
        std::vector<std::unique_ptr<TicTacToe>> get_games()
        {
            std::ifstream read_file;
            read_file.open("tictactoe.dat");
            std::vector<std::unique_ptr<TicTacToe>>& games();
            std::string line;
            std::vector<std::string> pegs(16, " ");
            std::string name;
            read_file>>name;
            for(int i = 0; i < name.size(); i++)
            {
                pegs[i] = name[i];
            }
        }
};