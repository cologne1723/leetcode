class Solution
{
public:
    vector<int> plusOne(vector<int> &digits)
    {
        digits.back()++;
        for (int i = (int)digits.size() - 1; i >= 1; --i)
            if (digits[i] == 10)
                digits[i] = 0, digits[i - 1]++;
        if (digits[0] == 10)
            digits.insert(digits.begin(), 1), digits[1] = 0;
        return digits;
    }
};