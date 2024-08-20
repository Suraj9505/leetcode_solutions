class Solution {
public:
    int romanToInt(string s) {
        map<char, int> hashMap = {
            {'I' , 1}, {'V' , 5}, {'X' , 10}, {'L' , 50}, {'C' , 100}, {'D' , 500}, {'M', 1000}
            };
        int sum = 0, len = s.length(), i = 0;
    while (i < len){
        if(hashMap[s[i]] < hashMap[s[i+1]] && i < len-1){
            sum += hashMap[s[i+1]] - hashMap[s[i]];
            i += 2;
        }
        else{
            sum += hashMap[s[i]];
            i++;
        }
    }
    return sum;
    }

};