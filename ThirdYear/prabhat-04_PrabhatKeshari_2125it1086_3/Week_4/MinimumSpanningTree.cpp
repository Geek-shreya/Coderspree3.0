class Solution
{
	public:
	//Function to find sum of weights of edges of the Minimum Spanning Tree.
    int spanningTree(int V, vector<vector<int>> adj[])
    {
        // code here
        vector<bool> visited(V,false);
        set<pair<int,int>> st;
        // {weight, node}
        st.insert({0, 0});
        int sumWeight = 0;
        
        while(!st.empty()) {
            auto it = *(st.begin());
            int weight = it.first;
            int node = it.second;
            
            st.erase(it);
            
            if(visited[node]) continue;
            visited[node] = true;
            
            sumWeight += weight;
            
            for(auto itr : adj[node]) {
                int adjNode = itr[0];
                int eWt = itr[1];
                if(!visited[adjNode]) {
                    st.insert({eWt,adjNode});
                }
            }
        }
        return sumWeight;
    }
};