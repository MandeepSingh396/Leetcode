class Solution {
public:
    string longestPalindrome(string s) {
        if(s.length() == 0  || s.length()<1)
            return "";
        int start = 0;
        int end = 0;
        for (int i=0; i<s.size(); i++)
        {
            int len1 = expandfrommiddle(s, i,i);
            int len2 = expandfrommiddle(s, i,i+1);
            int maxlength = max(len1, len2);
            if(maxlength > end-start)
            {
                start = i - ((maxlength-1)/2);
                end = i + (maxlength/2);
            }
        }
        return s.substr(start, end-start+1);
    }
    public: int expandfrommiddle(string s, int left, int right){
        if( s.length() == 0  || left > right)
            return 0;
        while(left>=0 && right<s.size() && s[left] == s[right])
        {
            left--;
            right++;
        }
        return right-left-1;
    }
};