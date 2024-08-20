class Solution {
public:
    string intToRoman(int num) {
        int values[] = {1, 4, 5, 9, 10, 40, 50, 90, 100, 400, 500, 900, 1000};
    string symbols[] = {"I", "IV", "V", "IX", "X", "XL", "L", "XC", "C", "CD", "D", "CM", "M"};

    int size = sizeof(values) / sizeof(values[0]); 
    string roman = "";
    for (int i = size-1; i >= 0 ; i--){
        while(num >= values[i]){
            roman += symbols[i];
            num -= values[i];
        }
    }

    return roman;
    }
};