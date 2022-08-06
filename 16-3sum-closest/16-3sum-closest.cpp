class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int n = nums.size();
        int res = INT_MAX - 10000;
        sort(nums.begin(), nums.end());
        for (int i=0; i<n-2; i++)
        {
            int low = i+1;
            int high = n-1;
            while(low<high)
            {
                int sum = nums[i] + nums[low] + nums[high];
                int diff = abs(sum - target);
                if (sum == target)
                    return sum;
                else if(sum < target)
                {
                    if(abs(res-target) > diff)
                        res = sum;
                    low++;
                }
                else
                {
                    if(abs(res-target) > diff)
                        res = sum;
                    high--;
                }
            }
        }
        return res;
    }
};