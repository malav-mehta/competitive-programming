/* 20. Valid Parentheses, 0 ms */

class Solution {
public:
    bool isValid(string s) {
        /*
        1) Iterate through the string to check for opening parentheses, and
        push the corresponding closing parenthese to the stack.
        
        2) If the current character is not an opening parenthese, and it does
        not match the closing parenthesese at the top of the stack, then the
        structure is not valid.
        
        3) At the end, the stack should be empty.
        
        Time complexity: O(n)
        Space complexity: O(n)
        */
        
        stack<char> st;
        
        for (char c : s) {
            if (c == '(') st.push(')');
            else if (c == '[') st.push(']');
            else if (c == '{') st.push('}');
            else if (st.empty() || c != st.top()) return false;
            else st.pop();
        }
        
        return st.empty();
    }
};
