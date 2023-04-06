class Solution {
  public:
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        // Code here
        vector<int>path;
        queue<int>q;
        int vis[V+1];
        memset(vis,0,sizeof(vis));
        q.push(0);
        vis[0]=1;

        while(!q.empty()){
            int f=q.front();
            q.pop();
            path.push_back(f);
            for(auto itr:adj[f]){
                if(!vis[itr]){
                    q.push(itr);
                    vis[itr]=1;
                }
            }
        }
        return path;
    }
};
