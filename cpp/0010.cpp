#include <regex>
class Solution
{
public:
    bool isMatch(string s, string p)
    {
        auto r = regex(p);
        smatch m;
        return regex_match(s, m, r);
    }
};