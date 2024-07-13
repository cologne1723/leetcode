class Solution
{
public:
    bool isValid(string s)
    {
        auto op = [&](char a)
        {
            return a == '(' || a == '{' || a == '[';
        };
        auto mat = [&](char a, char b)
        {
            return a == '(' && b == ')' || a == '{' && b == '}' || a == '[' && b == ']';
        };
        stack<int> S;
        S.push('?');
        for (auto c : s)
        {
            if (op(c))
                S.push(c);
            else if (!mat(S.top(), c))
                return false;
            else
                S.pop();
        }
        return S.size() == 1;
    }
};