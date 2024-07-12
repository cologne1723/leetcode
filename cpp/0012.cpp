class Solution
{
public:
    string intToRoman(int num)
    {
        string t4[] = {"", "M", "MM", "MMM"};
        string t3[] = {"", "C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM"};
        string t2[] = {"", "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC"};
        string t1[] = {"", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"};

        return t4[num / 1000] + t3[num / 100 % 10] + t2[num / 10 % 10] + t1[num % 10];
    }
};