// // //Here we are going to understand one more intresting problem called n queen problem
// // //Now writing the logic for the N queesn problem
// // # include<iostream>
// // # include<bits/stdc++.h>
// // # include<stack>
// // using namespace std;
// // void addSolution(vector<vector<int>> &ans,vector<vector<int>> &board,int n){
// //     vector<int> temp;
// //     for(int i=0;i<n;i++){
// //         for(int j=0;j<n;j++){
// //             temp.push_back(board[i][j]);
// //         }
// //     }
// //     ans.push_back(temp);
// // }
// // bool isSafe(int row,int col,vector<vector<int>> board,int n){
// //          int x=row;
// //          int y=col;
// //     //cheking for the same rw
// //     while(y>=0){
// //         if(board[x][y]==1){
// //             return false;

// //         y--;
// //         }
// //     }
// //     x=row;
// //     y=col;

// //     //checking for the elft diagonal
// //     while(x>=0 && y>=0){
// //         if(board[x][y]==1){
// //             return false;
// //          x--;
// //          y--;
// //         }
// //     }
// //     x=row;
// //     y=col;
// //     //cheking for the right diagonal
// //     while(x<n && y>=0){
// //         if(board[x][y]==1)
// //             return false;
// //         x++;
// //         y--;
// //     }
// //     return true;
// // }
// // void solve(int col,vector<vector<int>> ans,vector<vector<int>> board,int n){
// //     //Base case if all columns are filled add and return
// //     if(col==n){
// //         addSolution(ans,board,n);
// //         return;
// //     }
// //     //try to place the quuen in each col and case for row will simply handled by the recusrion
// //     for(int row=0;row<n;row++){
// //         if(isSafe(row,col,board,n)){
// //              board[row][col]=1;
// //              solve(col+1,ans,board,n);
// //              //Now backtracking the solution remove the queen from the current cell
// //              board[row][col]=0;
// //         }
// //     }
// // }
// // vector<vector<int>> nQueens(int n){
// // vector<vector<int>> ans;
// // vector<vector<int>> board(n,vector<int>(n,0));

// // solve(0,ans,board,n);

// // return ans;
// // }


// //implementing the n queen problem
// //we ave to place the queen such that one queen cannot attack the other queen
// # include<iostream>
// # include<bits/stdc++.h>
// using namespace std; 
// void addSolution(vector<vector<int>> ans,vector<vector<int>> board,int n){
//     vector<int> temp;
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             temp.push_back(board[i][j]);
//         }
//     }
//     ans.push_back(temp);
// }
// bool isSafe(int row,int col,vector<vector<int>> &board){
//     int x=row;
//     int y=col;
// while(y>=0){
//     if(board[x][y]==1){
//         return false;

//     y--;
//     }
//     x=row;
//     y=col;
// }
// x=row;
// y=col;
// while(x>=0 && y>=0){
//     if(board[x][y]==1){
//         return false;
//     x--;
//     y--;
//     }
// }
// while(x<n && y>=0){
//     if(board[x][y]==1){
//         return false;
//     x--;
//     y--;
//     }
// }

// }
// void solve(int col,vector<vector<int>> ans,vector<vector<int>> board,int n){
//             if(col==n){
//                 addSolution(ans,board,n);
//                 return;
//             }
//             for(int row=0;row<n;row++){
//                 if(isSafe(row,col,board)){
//                     board[row][col]=1;
//                     solve(col+1,ans,board,n);
//                     //now here we backtrack the solution
//                     board[row][col]=0;
//                 }
//             }
// }
// vector<vector<int>> nQueens(int n){
//     //intializing the answer wala array
// vector<vector<int>> ans;
//     //intializing the board on which we have to traverse
//     vector<vector<int>> board(n,vector<int>(n,0));

//     solve(0,ans,board,n);

// }
// int main(){
// }