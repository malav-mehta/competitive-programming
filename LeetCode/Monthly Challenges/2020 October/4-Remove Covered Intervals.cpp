class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& n) {
        int ans=0,l=-1,r=-1;
        sort(n.begin(),n.end());
        for(auto&p:n){
            if(p[0]>l&&p[1]>r){
                l=p[0];
                ++ans;
            }
            r=max(r,p[1]);
        }
        return ans;
    }
};
