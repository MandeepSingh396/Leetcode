class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> res;
        sort(nums.begin(), nums.end());
        int n = nums.size();
        for (int i=0; i<n-2; i++)
        {
            if(i==0 || nums[i]!=nums[i-1])
            {
                int low = i+1;
                int high = n-1;
                while(low < high)
                {
                    vector<int> temp;
                    int sum = nums[i] + nums[low] + nums[high];
                    if(nums[i] + nums[low] + nums[high] == 0)
                    {
                        temp.push_back(nums[i]);
                        temp.push_back(nums[low]);
                        temp.push_back(nums[high]);
                        res.push_back(temp);
                        while(low < high && nums[low] == nums[low+1])
                            low++;
                        while(low < high && nums[high] == nums[high-1])
                            high--;
                        low++;
                        high--;
                    }
                    else if (sum < 0)
                        low++;
                    else
                        high--;
                }
            }
        }
        return res;
    }
};