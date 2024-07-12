class Solution
{
public:
    int reverse(int x)
    {
        unsigned ux = x;
        unsigned z = x > 0 ? ux : -ux;
        unsigned u = 0;
        while (z)
        {
            if (u > (1u << 31) / 10)
                return 0;
            u = u * 10;
            if (u > (1u << 31) - z % 10)
                return 0;
            u += z % 10;
            z /= 10;
        }
        return x < 0 ? -u : u;
    }
};