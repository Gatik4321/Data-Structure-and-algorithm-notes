// Noe we are going to know about bfs traversal in graphs
//BFS stands for the breath first search
// 1 sabse pehle source node ko queue mein insert karo
// 2 visited mein use true karo
// 3 qyueue se dletee kar do
// 4 abs wale are mein jo node thiie usse store kar do
// 5 use saaree elemets adjaceny list wale queue mein push kar do 
/*
# include<unordered_map>
# include<queue>
# include<set>
# include<luist>
//Now writitng the code for the bfs traversal
//list ki jagah set and push_back ki jagah insert
void prepareAdjList(unordered_map<int,list<int> > adjlist,unorderd_map<int,bool> visited){
    for(int i=0;i<edges.size();i++){
        int u=edges[i].first;
        int v=edges[i].second;


        adjlist[u].push_back(v);
        adjList[v].push_back(u);
;    }
}
void bfs(unordered_map<int,list<int> > adjlist, unorderd_map<int,bool> visited,vector<int> ans,int node){
    queue<int> q;
    q.push(node);
    visited[node]=1;
    while(!q.empty()){
        int frontnode=q.front();
        q.pop();

        //store frotnode into ans;
        ans.push_back(frontnode);

        for(auto i:adjlist(frotnode)){
            if(!visited[i]){
                q.push(i);
                visited[i]=1;
            }
        }
    }
}drf
vector<int> BFS(int vertex,vector<pair<int,int>> edges){
        unordered_map<int,list<int> > adjlist;
        vector<int> ans;
        unorderd_map<int,bool> visited;

        prepareAdjList(List,edges);

        //traverse all componenets of the graph
        for(int i=0;i<vertex;i++){
            if(!visited[i]){
                bfs(adjlist,visited,ans,i);
            }
        }
        return ans;
}
*/

