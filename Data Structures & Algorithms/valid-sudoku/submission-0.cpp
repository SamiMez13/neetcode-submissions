class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector <vector<bool>>  vis_col(10, vector<bool>(10, false)) , vis_row(10, vector<bool>(10, false));
        vector < vector< vector< bool> > >vis_box(10, vector<vector<bool>>(7, vector<bool>(10, false))) ;
        for (int i = 0 ; i<9 ; i++) {
            for (int j = 0 ; j<9; j++) {
                if (board[i][j] == '.') continue ;
                int x  = board[i][j]-'0';
                int div_i= i / 3 , div_j = j / 3 ;
                if (div_i == 1 ) div_i = 3;
                else if (div_i == 2 ) div_i = 6;
                if (div_j == 1 ) div_j = 3;
                else if (div_j == 2 ) div_j = 6;
                if (vis_box[ div_i][ div_j ][x] || vis_col[ j][ x] || vis_row[i][ x]) return false;
                vis_row[i][ x] =  true;
                vis_col[ j][ x] =  true;
                vis_box[ div_i][ div_j ][x] = true;
            }

        }
        return true;
    }
};
