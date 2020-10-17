class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if(!matrix.size()||!matrix[0].size())return false;
        for(vector<int>& v:matrix){
            if(v.front()<=target&&target<=v.back()){
                for(int n:v)if(n==target)return true;
                return false;
            }
        }
        return false;
    }
};
