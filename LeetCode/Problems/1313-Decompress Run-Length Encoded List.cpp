/* 1313. Decompress Run-Length Encoded List, 4 ms */

class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        /* 
        1) Iterate through every second element of the numbers array to get the
        frequency and the value by getting the next element.
        
        2) Append the value to the resultant array a total of frequency times.
        */
        
        vector<int> ans;
        
        for (int i = 0; i < nums.size(); i += 2) {
            int freq = nums[i];
            int val = nums[i + 1];
            
            while (freq--)
                ans.push_back(val);
        }
        
        return ans;
    }
};