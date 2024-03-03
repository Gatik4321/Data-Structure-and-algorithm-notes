//Topological Sort inside the Grpah
// Topological Sort using BFS traversal
//Topological Sort using Kahn's algorithm
# include<iostream>
# include<bits/stdc++.h>
# include<unordered_map>
# include<list>
# include<queue>
# include<vector>
using namespace std;
class solution{
//Now writing the code for the topologcl Sort or we can say khans algorithm
vector<int> topologicalSort(vector<vector<int>> &edges,int v,int e){
    //create adj list\-
    unordered_map<int,list<int>> adj;
    for(int i=0;i<e;i++){
        int u=edges[i][0];
        int v=edges[i][1];

    adj[u].push_back(v);
    }

    //find all indegrees
  vector<int> indegree(v);
   for(auto i:adj){
    for(auto j:i.second){
        indegree[j]++;
    }
   }

//0 indegree walo ko push kardo
queue<int> q;
for(int i=0;i<v;i++){
    if(indegree[i]==0){
        q.push(i);
    }
}
//do BFS
vector<int> ans;
while(!q.empty()){
    int front=q.front();
    q.pop();

    ans.push_back(front);

    for(auto i:adj[front]){
        indegree[i]--;
        if(indegree[i]==0){
            q.push(i);
        }
    }
}
}
};
int main(){

}