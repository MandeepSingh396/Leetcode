class Solution {
public:
    string intToRoman(int num) {
        vector<string> s = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
        vector<int> div = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
        string res = "";
        int i=0;
        while(i <= div.size()-1)
        {
            if(num >= div.at(i))
            {
                num -= div.at(i);
                res += s.at(i);
            }
            else
                i++;
        }
        return res;
    }
};