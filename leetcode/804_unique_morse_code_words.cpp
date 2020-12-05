/* 804. Unique Morse Code Words, 4 ms */

class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        vector<string> morse = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        unordered_set<string> w;
        
        for (string s : words) {
            string a;
            
            for (char c : s) {
                a += morse[c - 'a'];
            }
            
            w.insert(a);
        }
        
        return w.size();
    }
};

