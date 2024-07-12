class Solution
{
public:
    int maxArea(vector<int> &height)
    {
        int N = height.size();
        vector<pair<int, int>> V;
        for (int i = 0; i < N; i++)
            V.emplace_back(height[i], i);
        sort(V.rbegin(), V.rend());
        int mn = N - 1, mx = 0, ans = 0;
        for (auto [h, i] : V)
        {
            mn = min(mn, i);
            mx = max(mx, i);
            ans = max(ans, h * (mx - mn));
        }
        return ans;
    }
};