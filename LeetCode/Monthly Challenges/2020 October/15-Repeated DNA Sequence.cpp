class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        if (s.size()<11)return {};
        vector<string> r; string c;
        unordered_set<string> sq,vs;
        
        for(int i=0;i<10;++i)c+=s[i];
        sq.insert(c);
        for(int i=10;i<s.size();++i){
            c=c.substr(1)+s[i];
            if(sq.find(c)!=sq.end()&&vs.find(c)==vs.end()){
                r.push_back(c);
                vs.insert(c);
            }
            else sq.insert(c);
        }
        return r;
    }
};
