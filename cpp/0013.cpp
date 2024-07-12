class Solution
{
public:
    int romanToInt(string s)
    {
        vector<string> t4 = {"", "M", "MM", "MMM"};
        vector<string> t3 = {"", "C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM"};
        vector<string> t2 = {"", "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC"};
        vector<string> t1 = {"", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"};
        vector<pair<vector<string>, int>> T = {{t4, 1000}, {t3, 100}, {t2, 10}, {t1, 1}};
        int ans = 0;
        for (auto [x, t] : T)
        {
            for (int i = (int)x.size() - 1; i >= 0; --i)
            {
                string z = x[i];
                if (s.substr(0, z.size()) == z)
                {
                    ans += t * i;
                    s = s.substr(z.size());
                }
            }
        }
        return ans;
    }
};