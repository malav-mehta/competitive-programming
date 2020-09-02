class Solution
{
public:
        bool containsNearbyAlmostDuplicate(vector<int> &nums, int k, int t)
        {
                set<long long> s;

                for (int i = 0; i < nums.size(); ++i)
                {
                        if (i > k && i - k - 1 < nums.size())
                                s.erase(nums[i - k - 1]);

                        auto p = s.lower_bound((long long)nums[i] - t);
                        if (p != s.cend() && *p - nums[i] <= t)
                                return true;
                        s.insert(nums[i]);
                }

                return false;
        }
};