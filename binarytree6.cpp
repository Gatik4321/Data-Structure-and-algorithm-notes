//code and logic to burn a binary tree
//Question to burn a binary tree using level order traversal
//Time complexity of the solution is:O(n)
//space complexity of oution:O(n)
//Solving the question using level order traversal
# include<iostream>
# include<bits/stdc++.h>
# include<queue>
# include<map>
using namespace std;
class node{
    public:
    int data;
    node* left;
    node* right;
    node(int data){
        this->data=data;
        this->left=NULL;
        this->right=NULL;
    }
};
class solution{
     public:
     node* createParentMapping(node* root,int target, map<node*,node*> nodetoparent){
       
       node* res=NULL;
       queue<node*> q;
       q.push(root);
       nodetoparent[root]=NULL;

       while(!q.empty()){
        node* front=q.front();
        q.pop();
        if(front->data==target){
            res=front;
        }
        if(front->left){
            nodetoparent[front->left]=front;
            q.push(front->left);
        }
        if(front->right){
            nodetoparent[front->right]=front;
            q.push(front->right);
        }
       }
       return res;
     }
     int burntree(node* root,map<node*,node*> &nodetoparent){
           map<node*,bool> visited;
           queue<node*> q;
           q.push(root);
           visited[root]=true;
        
           int ans=0;
           
           while(!q.empty()){
            bool flag=0;
            int size=q.size();
            for(int i=0;i<size;i++){
                node* front=q.front();
                q.pop();
            if(front->left&&!visited[front->left]){
                flag=1;
                q.push(front->left);
                visited[front->left]=true;
            }
            if(front->right&&!visited[front->left]){
                flag=1;
                q.push(front->right);
                visited[front->right]=true;
            }
            if(nodetoparent[front]&&!visited[nodetoparent[front]]){
                flag=1;
                q.push(nodetoparent[front]);
                visited[nodetoparent[front]]=1;
            }
            }
        if(flag==1){
            ans++;
        }
           }
        return ans;

     }
     int minTime(node* root,int target){
        //algo:
        //step 1:create node to parent mapping.
        //step 2: find the target node
        //step 3: burn the tree in min time using ma and the queue and using the algo of the level order traversal
        
        map<node*,node*> nodetoparent;
        node* targetnode=createParentMapping(root,target,nodetoparent);
        int ans=burntree(targetnode,nodetoparent);

     }
};
int main(){
    return 0;
}