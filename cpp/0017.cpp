class Solution
{
public:
    vector<string> letterCombinations(string digits)
    {
        if (digits == "")
            return {};
        vector<string> a = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
        vector<string> r = {""};
        for (auto c : digits)
        {
            vector<string> z;
            for (string x : r)
                for (char y : a[c - '0'])
                    z.push_back(x + y);
            r = z;
        }
        return r;
    }
};