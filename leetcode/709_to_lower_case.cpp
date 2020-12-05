/* 709. To Lower Case, 0 ms */

class Solution {
public:
    string toLowerCase(string str) {
        /*
        Iterate through the array, and change to lowercase if the current
        character exists in {A...Z}
        
        Time complexity: O(n)
        Space complexity: O(1)
        */
        
        for (int i = 0; i < str.size(); ++i) {
            if (str[i] >= 'A' && str[i] <= 'Z')
                str[i] = str[i] - 'A' + 'a';
        }
        return str;
    }
};
