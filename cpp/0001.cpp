class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int N = nums.size();
        for(int i=0; i<N; i++)
            for(int j=0; j<i; j++)
                if(nums[i]+nums[j] == target)
                    return {i, j};
        return {};
    }
};
