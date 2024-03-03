//Question Topological osrt using DFS traversal
# include<iostream>
# include<unordered_map>
# include<stack>
# include<vector>
# include<list>
using namespace std;
class solution{
    //if time limit of the code exceded we can use vector instead of using unordered_map
    // vector<bool> visited;
    void topSort(int node, unordered_map<int,bool> visited,stack<int> s, unordered_map<int,list<int>> adj){
                 visited[node]=1;
                 for(auto neighbour:adj[node]){
                    if(!visited[node]){
                        topSort(neighbour,visited,s,adj);
                    }
                 }
           s.push(node);
    }
    vector<int> topologicalSort(vector<vector<int>> &edges,int v,int e){
                     //create adj list
                //here e be the no. of nodes
                // v be the no. of edges
        unordered_map<int,list<int>> adj;
    for(int i=0;i<e;i++){
        int u=edges[i][0];
        int v=edges[i][0];
    
     adj[u].push_back(v);
    }
    unordered_map<int,bool> visited;
    stack<int> s;
    vector<int> ans;
//calls dfs topological sort functions for all the components
         for(int i=1;i<v;i++){
              if(!visited[i]){
                   topSort(i,visited,s,adj);
              }
       
    while(!s.empty()){
        ans.push_back(s.top());
        s.pop();
    }
         }
         return ans;
    }
};
int main(){

}