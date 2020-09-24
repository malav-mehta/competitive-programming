class Solution {
public:
    char findTheDifference(string s, string t) {
        char ch[26]={};
        for(char c:s)--ch[c-'a'];
        for(char c:t)if(++ch[c-'a']>0)return c;
        return 'a';
    }
};
