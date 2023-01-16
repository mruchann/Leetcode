class Solution 
{
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) 
    {
        std::vector<pair<long long, int>>adjLists[n+1]; // {distance, vertex}
        std::priority_queue<pair<long long,int>> pq; // {distance, vertex}
        std::vector<long long> distance(n+1, INT_MAX);
        for (int i = 0; i < times.size(); i++)
            adjLists[times[i][0]].push_back(make_pair(times[i][2],times[i][1]));

        pq.push({0, k});
        distance[k] = 0;    

        while (!pq.empty())
        {
            auto [dist, cur] = pq.top();
            pq.pop();
            for (int i = 0; i < adjLists[cur].size(); i++)
            {
                long long new_distance = distance[cur] + adjLists[cur][i].first;
                if (distance[adjLists[cur][i].second] > new_distance)
                {
                    distance[adjLists[cur][i].second] = new_distance;
                    pq.push({new_distance, adjLists[cur][i].second});
                }
            }
        }
        long long res = INT_MIN;
        for (int i = 1; i <= n; i++)
        {
            if (distance[i] != INT_MAX)
                res = max(res, distance[i]);
            else 
                return -1;    
        }
        return res;    
    }
};
