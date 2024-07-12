class Solution
{
public:
    int find(int K, vector<int> &A, vector<int> &B)
    {
        // max(A[0, K-x); B[0, x)) <= min(A[K-x], B[x])
        // B[0, x) <= A[K-x]; A[0, K-x) <= B[x]
        int ok = 0, ng = min((int)B.size(), K) + 1;
        while (ng - ok != 1)
        {
            int mi = (ok + ng) / 2;
            if (B[mi - 1] <= A[K - mi])
                ok = mi;
            else
                ng = mi;
        }
        int ret = K - ok == (int)A.size() ? INT_MAX : A[K - ok];
        ok = min((int)B.size(), K), ng = -1;
        while (ok - ng != 1)
        {
            int mi = (ok + ng) / 2;
            if (A[K - mi - 1] <= B[mi])
                ok = mi;
            else
                ng = mi;
        }
        if (ok != (int)B.size())
            ret = min(ret, B[ok]);
        return ret;
    }
    double findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2)
    {
        int N = nums1.size() + nums2.size();
        if (nums1.size() < nums2.size())
            swap(nums1, nums2);
        int v1 = find((N - 1) / 2, nums1, nums2);
        int v2 = find(N / 2, nums1, nums2);
        return (v1 + v2) / 2.0;
    }
};