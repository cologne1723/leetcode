class Solution {
public:
    string longestPalindrome(string s) {
        int N = s.size();
        string ans;
        for(int i=0; i<N; i++)
        {
            for(int d=0; i-d>=0&&i+d<N; d++)
            {
                if(s[i-d] != s[i+d]) break;
                if((int)ans.size() < 2*d+1)
                    ans = s.substr(i-d, 2*d+1);
            }
            for(int d=0; i-d>=0&&i+d+1<N; d++)
            {
                if(s[i-d] != s[i+d+1]) break;
                if((int)ans.size() < 2*d+2)
                    ans = s.substr(i-d, 2*d+2);
            }
        }
        return ans;
    }
};