class Solution
{
public:
    int lengthOfLastWord(string s)
    {
        stringstream u;
        u << s;
        string k;
        while (u >> k)
            ;
        return k.size();
    }
};