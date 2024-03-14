// // //Now we are going to write the solution for the rat in a maze problem
// // # include<iostream>
// // # include<bits/stdc++.h>
// // using namespace std;
// // bool isSafe(int newx,int newy,vector<vector<bool>> &vis,vector<vector<int> > &arr,int n){
// //   if((newx>=0 && newx<n)&&(newy>=0&&newy<n) && !vis[newx][newy] && arr[newx][newy]==1){
// //     return true;
// //   }
// //   else{
// //     return false;
// //   }
// // }
// // void solve(int x,int y,vector<vector<int> > &arr,int n,vector<string> &ans,vector<vector<bool>> visited,string path){
// //     if(x==n-1&&y==n-1){
// //         ans.push_back(path);
// //         return;
// //     }
    
// //     //We have 4 movemenst to traverse 
// //     //D L R U
// //     //but we have to check 4 condition before doing these traversals
// //     //arr[newx][newy]==1
// //     //visited[newx][newy]==0
// //     //newx>=0 newx<n
// //     //newy>=0 &&newy<n
// //     // these three conditon re used to test wether traversing in thta particukar direction is safe or ot
// //     //this is the logic for the down movement
// //     if(isSafe(x+1,y,visited,arr,n)){
// //         visited[x][y]=1;
// //         solve(x+1,y,arr,n,ans,visited,path);
// //         visited[x][y]=0;
// //     }
// //     //this is the logic for movement in Left duirection
// //     if(isSafe(x,y-1,visited,arr,n)){
// //         visited[x][y]=1;
// //         solve(x,y-1,arr,n,ans,visited,path);
// //         visited[x][y]=0;
// //     }
// //     //This is the logic for movement in right direction
// //     if(isSafe(x,y+1,visited,arr,n)){
// //         visited[x][y]=1;
// //         solve(x,y+1,arr,n,ans,visited,path);
// //         visited[x][y]=0;
// //     }
// //     //this is the logic for movement in upward dirstvion
// //     if(isSafe(x-1,y,visited,arr,n)){
// //         visited[x][y]=1;
// //         solve(x-1,y,arr,n,ans,visited,path);
// //         visited[x][y]=0;
// //     }
     


// // }
// // vector<string> searchMaze(vector<vector<int>> &arr,int n){
// //   vector<string> ans;
// //   vector<vector<bool>> visited(n,vector<bool> (n,0));
// //   string path="";

// //   if(arr[0][0]==0){
// //     return ans;
// //   }
// //   solve(0,0,arr,n,ans,visited,path);
// //   return ans;
// // }
// // int main(){

// // }



// //Rat in a maze problem cpp
// # include<iostream>
// # include<bits/stdc++.h>
// # include<stack>
// # include<vector>
// using namespace std;
// bool isSafe(int newx,int newy,vector<vector<bool>> visited,vector<vector<int >>&arr,int n){
//   if((newx>=0 && newx<n)&& (newy>=0&&newy<n)&& (!visited[newx][newy]) && (arr[newx][newy]==1)){
//     return true;
//   }
//   else{
//     return false;
//   }
// }
// void solve(int x,int y,vector<vector<int >>&arr,int n,vector<vector<bool>> visited,string path,vector<string> ans){
//        if(x==n-1 && y==n-1){
//         ans.push_back(path);
//  return;
//        }
//      //we have 4 movements in which we can travel
//      //we have to traverse in lexagraphical order
//      if(isSafe(x+1,y,visited,arr,n)){
//       visited[x][y]=1;
//       solve(x+1,y,arr,n,visited,path,ans);
//       visited[x][y]=0;
//      }
//      //Left
//        if(isSafe(x,y-1,visited,arr,n)){
//       visited[x][y]=1;
//       solve(x,y-1,arr,n,visited,path,ans);
//       visited[x][y]=0;
//      }
//      //RIght
//      if(isSafe(x+1,y,visited,arr,n)){
//       visited[x][y]=1;
//       solve(x+1,y,arr,n,visited,path,ans);
//       visited[x][y]=0;
//      }
//     //  Up
//     if(isSafe(x-1,y,visited,arr,n)){
//       visited[x][y]=1;
//       solve(x-1,y,arr,n,visited,path,ans);
//       visited[x][y]=0;
//      }
// }
// vector<string> searchMaze(vector<vector<int>> &arr,int n){
//   vector<string> ans;
//   vector<vector<bool>> visited(n,vector<bool>(n,0));
//   string path="";
//   if(arr[0][0]==0){
//     return ans;;
//   }
//   solve(0,0,arr,n,visited,path,ans);
// }
// int main(){

// }


//Now we are going to write the code for the rat in a maze problem
// # include<iostream>
// # include<vector>
// # include<bits/stdc++.h>
// # include<queue>
// using namespace std;
// bool isSafe(int newx,int newy,vector<vector<int>> &visited,vector<vector<int>> &arr,int n){
//            if((newx>=0 && newx<n)&&(newy>=0&&newy<n)&&!visited[newx][newy]&&arr[newx][newy]==1){
//                   return true;
//            }
//            else{
//                   return false;
//            }
// }
// void solve(int x,int y,vector<string> ans,int n,string path,vector<vector<int>> &visited,vector<vector<int>> &arr){
//   if(x==n-1 && y==n-1){
//     ans.push_back(path);
//     return;
//   }
//   //else we ahve 4 moves to traverse in lexagraphical order
//   //D L R U
//   if(isSafe(x+1,y,visited,arr,n)){
//         visited[x][y]=1;
//         solve(x+1,y,ans,n,path,visited,arr);
//         //now jab vapis aaenga then backtrack
//         visited[x][y]=0;
//   }
//   //Left
//   if(isSafe(x,y-1,visited,arr,n)){
//         visited[x][y]=1;
//         solve(x+1,y,ans,n,path,visited,arr);
//         //now jab vapis aaenga then backtrack
//         visited[x][y]=0;
//   }
//   //RIght
//   if(isSafe(x,y+1,visited,arr,n)){
//         visited[x][y]=1;
//         solve(x+1,y,ans,n,path,visited,arr);
//         //now jab vapis aaenga then backtrack
//         visited[x][y]=0;
//   }
//   //Up
//   if(isSafe(x-1,y,visited,arr,n)){
//         visited[x][y]=1;
//         solve(x+1,y,ans,n,path,visited,arr);
//         //now jab vapis aaenga then backtrack
//         visited[x][y]=0;
//   }
// }
// vector<string> searchMaze(vector<vector<int>> &arr,int n){
//   vector<string> ans;
//   vector<vector<int>> visited(n,vector<int>(n,0));
//   string path="";
//   if(arr[0][0]==0){
//     return ans;
//   }
//   solve(0,0,ans,n,path,visited,arr);
//   return ans;
// }
// int main(){

// }