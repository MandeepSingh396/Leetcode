class Solution {
public:
    int reverse(int x) {
        queue<int> q;
        while(x!=0)
        {
            q.push(x%10);
            x = x/10;
        }
        int res = 0;
        int i=10;
        while (!q.empty())
        {
            if (res > INT_MAX/10 || (res == INT_MAX / 10 && q.front() > 7)) return 0;
            if (res < INT_MIN/10 || (res == INT_MIN / 10 && q.front() < -8)) return 0;
            res = res * i + q.front();
            q.pop();
        }
        return res;
    }
};