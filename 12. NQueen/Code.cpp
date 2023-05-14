bool isSafe(int row, int col,int n,vector<string> &board){

	int x=row;
	int y=col;

	//same row
	while(y>=0){
		if(board[x][y] =='Q'){
			return false;
		}
		y--;
	}
	//uppper back diagonal 
	x=row;
	y=col;
	while(y>=0 && x>=0){
		if(board[x][y] =='Q')
		{
			return false;
		}
		x--;
		y--;
	}
	//upper back down
	x=row;
	y=col;
	while(y>=0 && x<n){
		if(board[x][y] =='Q'){
			return false;
		}
		x++;
		y--;
	}

    return true;
}

void answer(vector<vector<string>> &ans,vector<string> &board,int n)
{
	vector<string> temp;
	for(int i=0;i<n;i++)
    {
		temp.push_back(board[i]);
        //ans.push_back(temp);
	}
	ans.push_back(temp);
}

void solve(int col,vector<vector<string>> &ans,vector<string> &board,int n){

	if(col == n){
		ans.push_back(board);
		return;
	}

	for(int row=0;row<n;row++){
		//if(isSafe(row,col,n,ans,board,map_h,map_d_up,map_d_down))
		if(isSafe(row,col,n,board))
		{
			//explore 
			board[row][col]='Q';
			
			solve(col+1,ans,board,n);
			//backtrack
			board[row][col]='.';
		
		}
	}
}


    vector<vector<string>> solveNQueens(int n) {

    vector<vector<string>> ans;
	vector<string> board;
    string str="";
	for(int i=0;i<n;i++){
		str+=".";
	}
    for(int i=0;i<n;i++){
		board.push_back(str);
	}

	solve(0,ans,board,n);
	return ans;
        
    }