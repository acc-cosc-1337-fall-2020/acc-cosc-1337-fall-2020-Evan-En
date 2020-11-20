#include<iostream>
#include<vector>
#include "tic_tac_toe.h"
using std::string; using std::cout;
class TicTacToe3 : public TicTacToe
{
    public:
        TicTacToe3(std::vector<string> p, string winner): TicTacToe(p, winner){}
        TicTacToe3(): TicTacToe(3){}
    private:
        bool check_column_win()
        {
            if(pegs[0]=="X" && pegs[3] == "X" && pegs[6] == "X")
            {
                return true;
            }
            if(pegs[1]=="X" && pegs[4] == "X" && pegs[7] == "X")
            {
                return true;
            }
            if(pegs[2]=="X" && pegs[5] == "X" && pegs[8] == "X")
            {
                return true;
            }
            if(pegs[0]=="O" && pegs[3] == "O" && pegs[6] == "O")
            {
                return true;
            }
            if(pegs[1]=="O" && pegs[4] == "O" && pegs[7] == "O")
            {
                return true;
            }
            if(pegs[2]=="O" && pegs[5] == "O" && pegs[8] == "O")
            {
                return true;
            }
        }
        bool check_row_win()
        {
            if(pegs[0]=="X" && pegs[1] == "X" && pegs[2] == "X")
            {
                return true;
            }
            if(pegs[3]=="X" && pegs[4] == "X" && pegs[5] == "X")
            {
                return true;
            }
            if(pegs[6]=="X" && pegs[7] == "X" && pegs[8] == "X")
            {
                return true;
            }
            if(pegs[0]=="O" && pegs[1] == "O" && pegs[2] == "O")
            {
                return true;
            }
            if(pegs[3]=="O" && pegs[4] == "O" && pegs[5] == "O")
            {
                return true;
            }
            if(pegs[6]=="O" && pegs[7] == "O" && pegs[8] == "O")
            {
                return true;
            }
        }
        bool check_diagonal_win()
        {
            if(pegs[0]=="X" && pegs[4] == "X" && pegs[8] == "X")
            {
                return true;
            }
            if(pegs[2]=="X" && pegs[4] == "X" && pegs[6] == "X")
            {
                return true;
            }
            if(pegs[0]=="O" && pegs[4] == "O" && pegs[8] == "O")
            {
                return true;
            }
            if(pegs[2]=="O" && pegs[4] == "O" && pegs[6] == "O")
            {
                return true;
            }
        }
};