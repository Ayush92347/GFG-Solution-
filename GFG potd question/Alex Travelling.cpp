class Solution {
  public:
    int minimumCost(vector<vector<int>>& flights, int n, int k) {
        // code here
        
        //create adjacency list
        vector<vector<vector<int>>> graph(n+1);
        
        for(int i  = 0 ; i < flights.size(); ++i) {
            
            int u = flights[i][0];
            int v = flights[i][1];
            int w = flights[i][2];
            
            graph[u].push_back({v,w});
        }
        
        vector<int> dist(n+1, -1);
        queue<vector<int>> q;
        dist[k] = 0;
        q.push({k,dist[k]}); /* Node | cost */
        int ans = INT_MIN;
        
        while(!q.empty()) {
            vector<int> frontNode = q.front();
            q.pop();
            
            int node = frontNode[0];
            int cost = frontNode[1];

            for(auto x: graph[node]) {
                int node_x = x[0];
                int cost_x = x[1];
                
                if(dist[node_x] == -1) {
                    dist[node_x] = cost + cost_x;
                    q.push({node_x, dist[node_x]});
                }
                
                else if(dist[node_x] > cost + cost_x) {
                    dist[node_x] = cost + cost_x;
                    q.push({node_x, dist[node_x]});
                }
            }
        }
        
        for(int i = 1 ; i < dist.size(); ++i) {
            if(dist[i] != -1) {
                ans = max(ans, dist[i]);
            }
            else return -1;
        }
        return ans;
    }
};
