/* 1502. Can Make Arithmetic Progression From Sequence, 8 ms */

class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        /*
        Iterate array after sorting and check if difference is the same between
        each element.
        
        Cases: length == 0 -> false, length == 1 || 2 -> true
        */
        
        if (arr.size()) {
            if (arr.size() == 2 || arr.size() == 1) return true;
            
            sort(arr.begin(), arr.end());
            int d = arr[1] - arr[0];
            for (int i = 2; i < arr.size(); ++i) if (arr[i] - arr[i - 1] != d)
                return false;
            
            return true;
        }
        
        return false;
    }
}
