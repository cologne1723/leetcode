class Solution
{
public:
    int threeSumClosest(vector<int> &nums, int target)
    {
        int r = nums[0] + nums[1] + nums[2];
        for (int i = 0; i < (int)nums.size(); i++)
            for (int j = 0; j < i; j++)
                for (int k = 0; k < j; k++)
                {
                    int z = nums[i] + nums[j] + nums[k];
                    if (abs(target - r) > abs(target - z))
                        r = z;
                }
        return r;
    }
};