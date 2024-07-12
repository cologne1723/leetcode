class Solution
{
public:
    bool isPalindrome(int x)
    {
        string s = to_string(x);
        string sr(s.rbegin(), s.rend());
        return s == sr;
    }
};