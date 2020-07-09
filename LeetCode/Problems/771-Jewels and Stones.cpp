/* 771. Jewels and Stones, 4 ms */

class Solution {
public:
    int numJewelsInStones(string J, string S) {
        /*
        Construct an unordered set in O(m) time with each jewel.
        Pass through the stones array and check if the code of each stone exists
        in the set.
        
        Time complexity: O(n + m)
        Space complexity: O(m)
        */
        int ans(0);
        unordered_set<char> j;
        for (char c : J) j.insert(c);
        for (char c : S) if (j.find(c) != j.end()) ++ans;
        return ans;
    }
};