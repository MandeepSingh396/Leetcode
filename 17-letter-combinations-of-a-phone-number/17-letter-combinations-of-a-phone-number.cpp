class Solution {
    map<char, string> m;
    public:
    void backtrack(string current, int index, string digits, vector<string>& res){
        if(current.size() >= digits.size())
        {
            res.push_back(current);
            return;
        }
        for(char sym : m[digits[index]])
            backtrack(current + sym, index+1, digits, res);
    }
public:
    vector<string> letterCombinations(string digits) {
        
        m['2'] = "abc";
        m['3'] = "def";
        m['4'] = "ghi";
        m['5'] = "jkl";
        m['6'] = "mno";
        m['7'] = "pqrs";
        m['8'] = "tuv";
        m['9'] = "wxyz";
        
        vector<string> res;
        if(digits.size() == 0)
            return res;
        backtrack("", 0, digits, res);
        return res;
    }
};