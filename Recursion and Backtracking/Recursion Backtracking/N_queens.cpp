#include<bits/stdc++.h>
using namespace std;

bool isQueenSafe( vector<vector<int>> &chess,int row ,int col)
 {   

  //  for right lane in chess
    for(int i =row-1,j=col-1;i>=0 && j>=0;i--,j--)
    {
      if (chess[i][j]==1)
      return false;
    }
  // for left lane
    for(int i =row-1,j=col;i>=0;i--)
    {
      if (chess[i][j]==1)
      return false;
    }

// for middle lane
    for(int i =row-1,j=col+1;i>=0 && j<chess.size();i--,j--)
    {
      if (chess[i][j]==1)
      return false;
    }
  // for lane
    for(int i =row,j=col-1; j>=0;j--)
    {
      if (chess[i][j]==1)
      return false;
    }

    return true;

 }


void printNQueens(vector<vector<int>> &chess, string qsf, int row) {
  //write your code here

  if(row==chess.size())
    {
       cout<<qsf + "." <<"\n";
       return;
    }
    
    for(int col=0;col<chess.size();col++)
    {
      if(chess[row][col]==0 && isQueenSafe(chess,row,col)==true)
      {
        chess[row][col]=1;
        printNQueens(chess,qsf + to_string(row) + "-" + to_string(col) + ",", row+1);
        chess[row][col]=0;
      }
    }



}

int main() {
  int n;
  cin >> n;
  vector<vector<int>> chess(n, vector<int> (n));

  printNQueens(chess, "", 0);

}