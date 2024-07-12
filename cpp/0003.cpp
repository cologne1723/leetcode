class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int N = s.size();
        int ans = 0;
        for(int i=0; i<N; i++)
        {
            vector<bool> c(256);
            for(int j=0;i+j<N;j++)
            {
                if(c[s[i+j]]) break;
                c[s[i+j]] = true;
                ans = max(ans, j+1);
            }
        }
        return ans;
    }
};