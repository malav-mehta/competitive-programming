/* 1108. Defanging an IP Address, 0 ms */

class Solution {
public:
    string defangIPaddr(string address) {
        /*
        Pass through the string, and append the character the current character
        to the resultant array if it is not a '.', else append "[.]" to the
        resultant array.
        
        Time complexity: O(n)
        Space complexity: O(n)
        */
        
        string ans;
        for (char c : address) {
            if (c == '.')
                ans += "[.]";
            else
                ans += c;
        }
        
        return ans;
    }
};