class Solution
{
public:
    int myAtoi(string s)
    {
        bool pos = true, step = false;
        uint64_t res = 0;
        for (char c : s)
        {
            if (step == 0 && c == ' ')
                continue;
            if (step == 0)
            {
                if (c == '-')
                {
                    step = true;
                    pos = false;
                    continue;
                }
                if (c == '+')
                {
                    step = true;
                    continue;
                }
            }
            if ('0' <= c && c <= '9')
            {
                step = true;
                res = res * 10 + c - '0';
                if (res >= 1u << 31)
                    res = 1u << 31;
                continue;
            }
            break;
        }
        if (pos && res == 1u << 31)
            --res;
        return pos ? res : -res;
    }
};