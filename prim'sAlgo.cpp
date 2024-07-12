int spanningTree(int V, vector<vector<int>> adj[])
    {
        // code here
        priority_queue<pair<int,int>,vector<pair<int,int>>,
        greater<pair<int,int>>> pq;
        
        vector<int> vis(V,0);
        pq.push({0,0});
        int sum=0;
        
        while(!pq.empty()){
            auto i=pq.top();
            pq.pop();
            
            int node=i.second;
            int edw=i.first;
            
            if(vis[node]==1) continue;
                
            vis[node]=1;
            sum+=edw;
            
            for(auto it:adj[node]){
                int adjNode=it[0];
                int wt=it[1];
                
                if(!vis[adjNode])
                pq.push({wt,adjNode});
            }
        }
        
        return sum;
    }
