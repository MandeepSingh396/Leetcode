class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int left = 0;
        int right = n-1;
        int area = 0;
        if (n == 0 || n==1)
            return 0;
        while(left < right)
        {
            int h = min(height[left], height[right]);
            int w = right-left;
            area = max(h*w, area);
            if(height[left] <= height[right])
                left++;
            else
                right--;
        }
        return area;
    }
};