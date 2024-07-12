class Solution
{
public:
    vector<vector<int>> threeSum(vector<int> &nums)
    {
        int N = nums.size();
        unordered_map<int, vector<int>> M;
        for (int i = 0; i < N; i++)
            M[nums[i]].push_back(i);
        set<tuple<int, int, int>> S;
        for (int i = 0; i < N; i++)
            for (int j = 0; j < N; j++)
            {
                int a = nums[i], b = nums[j];
                if (i == j)
                    continue;
                int c = -a - b;
                if (!(a <= b && b <= c))
                    continue;
                if (S.count({a, b, c}))
                    continue;
                if (M.count(c))
                    for (auto x : M[c])
                        if (x != i && x != j)
                        {
                            S.emplace(a, b, c);
                            break;
                        }
            }
        vector<vector<int>> ret;
        for (auto [a, b, c] : S)
            ret.push_back(vector<int>({a, b, c}));
        return ret;
    }
};