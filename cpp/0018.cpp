class Solution
{
public:
    vector<vector<int>> fourSum(vector<int> &nums, int target)
    {
        map<int, int> nc;
        for (int x : nums)
            nc[x]++;
        vector<int> V;
        for (auto [a, c] : nc)
            for (int i = 0; i < min(c, 4); ++i)
                V.push_back(a);
        int N = V.size();
        unordered_map<int, vector<pair<int, int>>> M;
        for (int i = 0; i < N; i++)
            for (int j = 0; j < i; j++)
                M[V[i] + V[j]].emplace_back(j, i);
        vector<vector<int>> ret;
        for (auto [sm, X] : M)
        {
            int64_t tg = (int64_t)target - sm;
            if (tg < INT_MIN || tg > INT_MAX)
                continue;
            auto it = M.find(tg);
            if (it == M.end())
                continue;
            auto Y = it->second;
            for (auto [a, b] : X)
                for (auto [c, d] : Y)
                    if (b < c)
                        ret.push_back(vector<int>({V[a], V[b], V[c], V[d]}));
        }
        sort(ret.begin(), ret.end());
        ret.erase(unique(ret.begin(), ret.end()), ret.end());
        return ret;
    }
};