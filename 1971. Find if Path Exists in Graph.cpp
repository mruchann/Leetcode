class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) 
    {
        std::vector<int> adjLists[n];
        std::vector<bool> visited(n, false);
        std::queue<int> q;
        for (int i = 0; i < edges.size(); i++) // construct the adjacency lists
        {
            adjLists[edges[i][0]].push_back(edges[i][1]);
            adjLists[edges[i][1]].push_back(edges[i][0]);
        }        
        q.push(source);
        while (!q.empty())
        {
            int node = q.front();
            if (!visited[node])
                for (int i = 0; i < adjLists[node].size(); i++)
                    if (!visited[adjLists[node][i]])
                        q.push(adjLists[node][i]);
            q.pop();
            visited[node] = true;
        }
        return visited[destination];  
    }
};
