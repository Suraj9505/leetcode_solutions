class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int min_length = INT_MAX;
        if (strs.empty()) return "";
        string s = "";
        for (auto& value: strs) {
            if(value.length() < min_length)
                min_length = value.length();
        }

        int i = 0;
        while (i < min_length){
            for (auto& str: strs){
                if(str[i] != strs[0][i])
                    return s;
            }
            s += strs[0][i];
            i++;
        }
        return s;
    }
};