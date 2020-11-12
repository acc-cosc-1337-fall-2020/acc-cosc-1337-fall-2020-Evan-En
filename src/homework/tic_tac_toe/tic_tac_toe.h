//h
#ifndef TIC_TAC_TOE_H
#define TIC_TAC_TOE_H
#include<iostream>
#include<vector>
using std::string; using std::cout;
class TicTacToe
{
    public:
        int siz;
        TicTacToe(int s) :pegs(s*s, " "){
            siz = s;
        }
        void start_game(std::string first_player)
        {
            if(first_player == "X" || first_player == "O")
            {
                player = first_player;
                clear_board();
            }
        }
        void display_board()
        {
            for(int r = 0; r<pegs.size(); r++)
            {
                if(r % siz == 0 && r != 0)
                {
                    cout<<"\n";
                }
                cout<<pegs[r];
            }
            cout<<"\n";
        }
        string get_player()
        {
            return player;
        }
        void mark_board(int position)
        {
            pegs[position-1] = player;
            set_next_player();
        }
        bool game_over()
        {
            if(check_column_win() == true || check_row_win() == true || check_diagonal_win() == true)
            {
                set_winner();
                return true;
            }
            else if(check_board_full())
            {
                winner = "C";
                return true;
            }
            return false;
        }
        string get_winner()
        {
            return winner;
        }
    protected:
        std::vector<std::string> pegs;
        virtual bool check_column_win()
        {
            return true;
        }
        virtual bool check_row_win()
        {
            return true;
        }
        virtual bool check_diagonal_win()
        {
            return true;
        }
    private:
        std::string player;
        std::string winner;
        void set_next_player()
        {
            if(player == "X")
            {
                player = "O";
            }
            else
            {
                player = "X";
            }
        }
        bool check_board_full()
        {
            for(int i = 0; i<pegs.size(); i++)
            {
                if(pegs[i] == " ")
                {
                    return false;
                }
            }
            return true;
        }
        void clear_board()
        {
            for(int i = 0; i<pegs.size(); i++)
            {
                pegs[i] = " ";
            }
        }
        void set_winner()
        {
            if(player == "X")
            {
                winner = "O";
            }
            if(player == "O")
            {
                winner = "X";
            }
            
        }
};
#endif