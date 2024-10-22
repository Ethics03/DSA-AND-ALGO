#include <bits/stdc++.h>

using namespace std;

class Solution{

bool checkSafe(vector<string> board, int x , int y, int n){
  for(int row = 0 ;  row < x ; row++){
    if(board[row][y] == 'Q'){
      return false;
    }
  }

  int row = x;
  int col = y;
  while(row >= 0 && col >= 0){
    if(board[row][col] == 'Q'){
      return false;
    }
    row--;
    col--;
  }

row = x;
col = y;

while(row >= 0 && col <= n){
  if(board[row][col] == 'Q'){
    return false;
  }
  row--;
  col++;
}

return true;

}

public:   
  vector<vector<string>> solveQueens(int n){
    vector<vector<string>> board;
    vector<string> row(n, ".");
        int x = 0;
        if(x >=n){
          return true;
        }
        for(int col = 0 ; col < n ; col++){
          if(checkSafe(row,x,col,n)){
              row[x][col] = "Q";

              
              
          }
              
              
        }
  }



}




int main() {
   return 0;
}
    
