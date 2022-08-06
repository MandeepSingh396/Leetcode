class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.size() == 0)
            return "";
        if(strs.size() == 1)
            return strs[0];
        string res = "";
        string first = strs[0];
        int j = 0;
        while(j < first.length())
        {
            string s;
            for (int i=1; i<strs.size(); i++)
            {
                if (strs[i].substr(j, 1).length() == 0 || strs[0].substr(j, 1).length() == 0)
                    return res;
                s = first.substr(j, 1);
                if (strs[i].substr(j, 1) == s && i == strs.size() - 1)
                {
                    res += s;
                    continue;
                }
                else if(strs[i].substr(j, 1) != s)
                    return res;
            }
            j++;
        }
        return res;
    }
};