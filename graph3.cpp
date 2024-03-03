//Now writing the logic for the dfs traversal
//Depth First Search
// Algo
//1 
//pehle first element uthao and then 
//2 use compoenent wale vector mein push kar do answeer store karne ke liye
//3 teh jis element ko push kara hai use visited wale array mein true  mark kar dena 
//4 useke meighbouring element mein jakar dekho traverse hua hai ke nhi
//5 agar traverse nhi hua the use daal do
//writng the code for the dfs traversal
# include<unordered_map>
# include<list>
# include<queue>
# include<vector>
using namespace std;
void dfs(int node,unordered_map<int,bool> visited,unordered_map<int,list<int>> adj,vector<int> component){
          component.push_back(node);
          visited[node]=true;
        for(auto i:adj[node]){
            if(!visited[i]){
                dfs(i,visited,adj,component);
            }
        }
}
vector<vector<int>> depthFirstSearch(int V,int E,vector<vector<int>> edges){
    unordered_map<int,list<int>> adj;
    for(int i=0;i<E;i++){
        int u=edges[i][0];
        int v=edges[i][1];

        adj[u].push_back(v);
        adj[v].push_back(u);
    }
  vector<vector<int>> ans;
  unordered_map<int,bool> visited;
  for(int i=0;i<V;i++){
    vector<int> component;
    dfs(i,visited,adj,component);
    ans.push_back(component);
  }
  return ans;
}