bool isSafe(int row, int col,int n,vector<string> &board,
unordered_map<int,bool> &rowcheck,unordered_map<int,bool> &upper_back_diagonal,
unordered_map<int,bool> &lower_back_diagonal){

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
	}/*
	if(rowcheck[row]=true){
		return false;
	}

    if (upper_back_diagonal[n - 1 + col - row] = true) {
        return false;
    }
	
    if (lower_back_diagonal[row + col] = true) {
        return false;
    }*/
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

void solve(int col,vector<vector<string>> &ans,vector<string> &board,int n,
unordered_map<int,bool> &rowcheck,unordered_map<int,bool> &upper_back_diagonal,
unordered_map<int,bool> &lower_back_diagonal){

	if(col == n){
		ans.push_back(board);
		return;
	}

	for(int row=0;row<n;row++){
		//if(isSafe(row,col,n,ans,board,map_h,map_d_up,map_d_down))
		if(isSafe(row,col,n,board,rowcheck,upper_back_diagonal,lower_back_diagonal))
		{
			//explore 
			board[row][col]='Q';
			rowcheck[row]=true;
			upper_back_diagonal[n-1 + col-row] = true;
			lower_back_diagonal[row+col]=true;
			solve(col+1,ans,board,n,rowcheck,upper_back_diagonal,lower_back_diagonal);
			//backtrack
			board[row][col]='.';
			rowcheck[row]=false;
			upper_back_diagonal[n-1 + col-row] = false;
			lower_back_diagonal[row+col]=false;

		}
	}
}


  int totalNQueens(int n) {

    vector<vector<string>> ans;
	vector<string> board;
    string str="";
	for(int i=0;i<n;i++){
		str+=".";
	}
    for(int i=0;i<n;i++){
		board.push_back(str);
	}
	unordered_map<int,bool> rowcheck;
	unordered_map<int,bool> upper_back_diagonal;
	unordered_map<int,bool> lower_back_diagonal;

	solve(0,ans,board,n,rowcheck,upper_back_diagonal,lower_back_diagonal);
	return ans.size();
        
    }