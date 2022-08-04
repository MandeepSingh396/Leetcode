class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        set<char> st;
        int res = 0;
        int start = 0;
        int end = 0;
        while(start<s.size())
        {
            auto it = st.find(s[start]);
            if (it == st.end())
            {
                res = max(res, start-end+1);
                st.insert(s[start]);
                start++;
            }
            else
            {
                st.erase(s[end]);
                end++;
            }
        }
        return res;
    }
};