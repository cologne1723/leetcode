class Solution
{
public:
    vector<string> generateParenthesis(int n)
    {
        vector<string> ret;
        for (int i = 0; i < (1 << (2 * n)); i++)
        {
            string s;
            for (int j = 0; j < (2 * n); j++)
                if (i & (1 << j))
                    s += '(';
                else
                    s += ')';
            int cnt = 0;
            for (auto c : s)
            {
                if (c == ')')
                    --cnt;
                else
                    ++cnt;
                if (cnt < 0)
                    break;
            }
            if (cnt == 0)
                ret.push_back(s);
        }
        return ret;
    }
};