class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int> m;
        m['I'] = 1;
        m['V'] = 5;
        m['X'] = 10;
        m['L'] = 50;
        m['C'] = 100;
        m['D'] = 500;
        m['M'] = 1000;
        
        int i=0;
        int res=0;
        while(i < s.length())
        {
            if(m[s[i]] >= m[s[i+1]])
            {
                res += m[s[i]];
                i = i+1;
            }
            else
            {
                res += m[s[i+1]] - m[s[i]];
                i = i+2;
            }
        }
        return res;
    }
};