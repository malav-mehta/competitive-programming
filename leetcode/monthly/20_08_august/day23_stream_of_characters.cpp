class Trie {
public:
    Trie *next[26] = {};
    bool leaf = false;
    
    void insert(string& word, int pos = 0) {        
        if (pos == word.size()) {
            leaf = true;
        }
        
        else {
            int i = word[pos] - 'a';
            
            if (next[i] == nullptr) {
                next[i] = new Trie();
            }
            
            next[i]->insert(word, pos + 1);
        }
    }
    
    bool check(string& word, int pos) {
        if (leaf || pos == -1) {
            return leaf;
        }
        
        int i = word[pos] - 'a';
        
        if (next[i] == nullptr) return false;
        else return next[i]->check(word, pos - 1);
    }
};

class StreamChecker {
public:
    Trie root;
    string word;
    
    StreamChecker(vector<string>& words) {
        for (string w : words) {
            reverse(w.begin(), w.end());
            root.insert(w);
        }
    }
    
    bool query(char letter) {
        word += letter;
        return root.check(word, word.size() - 1);
    }
};

/**
 * Your StreamChecker object will be instantiated and called as such:
 * StreamChecker* obj = new StreamChecker(words);
 * bool param_1 = obj->query(letter);
 */
