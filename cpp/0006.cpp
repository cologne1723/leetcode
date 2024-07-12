class Solution
{
public:
    string convert(string s, int numRows)
    {
        if (numRows == 1)
            return s;

        vector<string> a(numRows);
        int x = 0, dx = 1;
        for (char c : s)
        {
            a[x].push_back(c);
            if (x + dx < 0 || x + dx >= numRows)
                dx *= -1;
            x += dx;
        }
        string ans;
        for (auto s : a)
            ans += s;
        return ans;
    }
};