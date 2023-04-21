class Solution

{

   public:

    int N2 ;

    bool dfs( vector<vector<int>>adj , int u , vector<int>&vis , int cnt )

    {

        if( cnt == N2 )

            return true ;

    

        vis[u] = 1 ;

        bool tmp = false ;

        

        for(auto&v:adj[u])

        {

            if( vis[v] == 0 && dfs(adj,v,vis,cnt+1) )

                return true ;

        }

        

        vis[u] = 0 ;

        return tmp ;

    }

    

    

    

    bool check(int N,int M,vector<vector<int>> edges)

    {

        vector<vector<int>>adj(N) ;

        N2 = N ;

        

        for(auto&k:edges)

        {

            adj[k[0]-1].push_back(k[1]-1) ;

            adj[k[1]-1].push_back(k[0]-1) ;

        }

        

        vector<int>vis(N,0) ;

        

        for(int i=0;i<N;i++)

            if(dfs(adj,i,vis,1))return true ;

            

        return false ;

        

    }

};
