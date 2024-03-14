//backtracking day1 rat in a maze problem

//algo:
//step1:We have to keep the track for empty lists using the visited array
//step2:all things are to be printed in the lexalogicalorder
//a,b,c,d...... that is basically said to be the sorted order\
//step3:be always remeber to call issafe function 
//a) arr[newx][newy]=1;
//b) visited[newx][newy]!=1
//c)  newx>=0 &&newx<=n||newy>=0 && newy<=n
//step4:
//we also have to remember that ditination of the mouse is 
//(n-1,n-1)
//src is (0,0)


/*
//so know uisng the above algo and roviding the solution
vector<string> searchMaze(vector<vector<int>> &arr,int n){
      vector<string> ans;
      vector<vector<bool> > visited(n,vector<bool> (n,0));
      vector<string> path;
      solve(0,0,arr,n,ans,visited,ans)



}
*/