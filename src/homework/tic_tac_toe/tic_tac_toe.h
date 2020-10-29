//h
#include<iostream>
#include<vector>
using std::string; using std::cout;
class TicTacToe
{
    private:
        std::string player;
        std::string winner;
        std::vector<std::string> pegs{" ", " ", " ", " ", " ", " ", " ", " ", " "};
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
            return false;
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
            if(pegs[2]=="X" && pegs[5] == "X" && pegs[8] == "X")
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
            if(pegs[2]=="O" && pegs[5] == "O" && pegs[8] == "O")
            {
                return true;
            }
            return false;
        }
        bool check_diagonal_win()
        {
            if(pegs[0]=="X" && pegs[4] == "X" && pegs[8] == "X")
            {
                return true;
            }
            if(pegs[6]=="X" && pegs[4] == "X" && pegs[2] == "X")
            {
                return true;
            }
            if(pegs[0]=="O" && pegs[4] == "O" && pegs[8] == "O")
            {
                return true;
            }
            if(pegs[6]=="O" && pegs[4] == "O" && pegs[2] == "O")
            {
                return true;
            }
            return false;
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
    public:
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
            for(int r = 1; r<10; r++)
            {
                cout<<pegs[r-1];
                if(r % 3 == 0)
                {
                    cout<<"\n";
                }
            }
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
};