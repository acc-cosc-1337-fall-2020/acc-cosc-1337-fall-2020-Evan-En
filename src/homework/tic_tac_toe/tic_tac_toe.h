//h
#include<iostream>
#include<vector>
using std::string; using std::cout;
class TicTacToe
{
    private:
        std::string player;
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
            return check_board_full();
        }
};