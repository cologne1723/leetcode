class Solution
{
public:
    string longestCommonPrefix(vector<string> &strs)
    {
        string s;
        for (char c : strs[0])
        {
            for (string z : strs)
                if (z[s.size()] != c)
                    return s;
            s += c;
        }
        return s;
    }
};