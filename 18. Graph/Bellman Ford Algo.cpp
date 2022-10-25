

class Solution {
  public:
    /*  Function to implement Bellman Ford
    *   edges: vector of vectors which represents the graph
    *   S: source vertex to start traversing graph with
    *   V: number of vertices
    */
    vector<int> bellman_ford(int V, vector<vector<int>>& edges, int S) {
        // Code here
        vector<int> dist(V,1e8);
        dist[S]=0;
        for(int i=0;i<V-1;i++){ //relaxation on v-1 edges
            for(auto i:edges){
                int u=i[0];
                int v=i[1];
                int wt=i[2];
                if(dist[u]!=1e8 and dist[u]+wt<dist[v]){
                    dist[v]=dist[u]+wt;
                }
            }
        }
        for(auto i:edges){
                int u=i[0];
                int v=i[1];
                int wt=i[2];
                if(dist[u]!=1e8 and dist[u]+wt<dist[v]){
                    return {-1};
                }
            }
        return dist;
    }
};
