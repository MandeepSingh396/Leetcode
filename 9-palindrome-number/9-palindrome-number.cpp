class Solution {
public:
    bool isPalindrome(int x) {
        queue<int> q;
        int y = x;
        while(y!=0)
        {
            q.push(y%10);
            y = y/10;
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
        if (res == x && x>=0)
            return true;
        else
            return false;
    }
};