//code is to detect the cycle in a directed and undirected graphs
//cycle detection in an undirection graph using bfs traversal
//detetcing cycyle in graph using BFS traversal
// # include<unordered_map>
// # include<queue>
// # include<list>
// # include<vector>
// using namespace std;
// bool isCyclic(int src,unordered_map<bool,int> visited,unordered_map<int,list<int>> adj){
//              unordered_map<int,int> parent;
//              parent[src]=-1;
//              visited[src]=1;
//              queue<int> q;
//              q.push(src);
//              while(!q.empty()){
//                 int front=q.front();
//                 q.pop();

//                 while(auto neighbour:adj[front]){
//                       if(visited[neightbour] && neighbour!=parent[front]){
//                         return true;
//                       }
//                       if(!visited[neighbour]){
//                         q.push(neighbour);
//                         visited[neighbour]=true;
//                         parent[neighbour]=front;
//                       }
//                 }
//              }
// }
// string cycledetection(vector<vector<int>> edges,int n,int m){
//     //n be the no. of nodes
//     //m be the no. of edges
//     unordered_map<int,list<int>> adj;
//     for(int i=0;i<m;i++){
//         int u=edges[i][0];
//         int v=edges[i][1];

//         adj[u].push_back(v);
//         adj[v].push_back(u);
//     }
//     //tohandle the disconnected components
//     unordered_map<bool,int> visited;
//     for(int i=0;i<n;i++){
//            if(!visited[i]){i 
//             bool ans=isCyclic(i,visited,adj);
//             if(ans){
//                 return "Yes";
//             }
//            }
//     }
//     return "No";
// }



//  cycle detetction in a grapg using DFS traversal
// # include<iostream>
// # include<bits/stdc++.h>
// # include<unordered_map>
// # include<queue>
// # include<vector>
// # include<list>
// using namespace std;
// class solution{
//     //cylcic detection in undirected graphs using the dfs traversal works on the basisi of the recursive calls


// bool isCyclic(int node,int parent,unordered_map<int,bool>& visited,unordered_map<int,list<int>>& adj) {
//            visited[node]=true;
//         for(auto neighbour:adj[node]){
//               if(!visited[neighbour]){
//                 if(isCyclic(neighbour,node,visited,adj)){
//                     return true;
//                 }
//               }else if(neighbour!=parent){
//                 return true;
//               }
//         }
//     return false;
// }
//      string cycleDetection(vector<vector<int>>& edges,int n,int m){
//         //n be the no. of nodes
//         //m be the no. of edges
//     unordered_map<int,list<int>> adj;
//     for(int i=0;i<m;i++){
//         int u=edges[i][0];
//         int v=edges[i][1];
//         adj[u].push_back(v);
//         adj[v].push_back(u);
//     }
//     //we will usea loop to handle the disconnected omponenets
//     unordered_map<int,bool> visited;
//     for(int i=0;i<n;i++){
//         if(!visited[i]){
//             bool ans=isCyclic(i,-1,visited,adj);
//             if(ans){
//                 return "Yes";
//             }
//         }
//     }
//  return "No";
//      }
// };

//detect a cycle inside a directed graph
// # include<list>
// # include<unordered_map>
// # include<iostream>
// # include<vector>
// using namespace std;
// class solution{
// bool checkCycleDFS(int node,unordered_map<int,bool> visited,unordered_map<int, bool>& dfsvisited, unordered_map<int, list<int>>& adj){
//     visited[node]=true;
//     dfsvisited[node]=true;
//     for(auto neighbour:adj[node]){
//              if(!visited[neighbour]){
//                 bool cycledetected=checkCycleDFS(neighbour,visited,dfsvisited,adj);
//                 if(cycledetected){
//                     return true;
//                 }else(dfsvisited[neighbour]){
//                     return true;
//                 }
//              }
//     }
//     dfsvisited[node]=false;
//     return false;
// }
// int detectCycleInDirectedGraph(int n,vector<pair<int,int>>& edges){
//     unordered_map<int,list<int>> adj;
//     for(int i=0;i<edges.size();i++){
//         int u=edges[i].first;
//         int v=edges[i].second;
//     adj[u].push_back(v);
//     }
//     unordered_map<int,bool> visited;
//     unordered_map<int,bool> dfsvisited;
//     for(int i=1;i<=n;i++){
//         bool cycleFound=checkCycleDFS(i,visited,dfsvisited,adj);
//         if(cycleFound){
//             return true;
//         }
//     }
//     return false;
// }
// };


//Code for cycle detection in a directed graph
