bool issafe(vector<vector<char>>& board, int row, int col, char val)
    {
       // string str = to_string(val);
        for(int i =0; i <board.size(); i++)
        {

            if(board[row][i] == val){
                return false;
            }
            if(board[i][col] == val){
                return false;
            }
            if(board[(3*(row/3)) + i/3][(3*(col/3)) + i%3] == val)
            {
                return false;
            }
        }
        return true;
    }

    bool solve(vector<vector<char>>& board)
    {

        for(int i =0; i<9; i++)
        {
            for(int j =0; j<9; j++)
            {
                if(board[i][j] == '.')
                {

                    for(char val ='1'; val <='9'; val++)
                    {
                        //char val = char(k);
                        //cout<<val<<"--";
                        if(issafe(board, i, j,val))
                        {
                            board[i][j] = val;
                            bool ans = solve(board);
                            if(ans)
                            {
                                return true;
                            }
                            else
                            {
                                board[i][j] = '.';
                            }
                        }
                        
                    }
                    return false;
                }
                

            }
        }
        return true;
    }

    void solveSudoku(vector<vector<char>>& board) {

        solve(board);
        return;
        
    }