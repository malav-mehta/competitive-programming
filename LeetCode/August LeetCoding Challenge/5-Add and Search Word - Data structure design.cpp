class WordDictionary {
public:
    /** Initialize your data structure here. */
    unordered_map<int, vector<string>> mp;

    WordDictionary() {}

    /** Adds a word into the data structure. */
    void addWord(string word) {
        mp[word.size()].push_back(word);
    }

    /** Returns if the word is in the data structure. A word could contain the dot character '.' to represent any one letter. */
    bool search(string word) {
        int n = word.size();

        for (string s : mp[n]) {
            bool f = true;

            for (int i = 0; i < n; ++i) {
                if (word[i] == '.') continue;
                if (s[i] != word[i]) {
                    f = false;
                    break;
                }
            }

            if (f) return true;
        }

        return false;
    }
};

/**
 * Your WordDictionary object will be instantiated and called as such:
 * WordDictionary* obj = new WordDictionary();
 * obj->addWord(word);
 * bool param_2 = obj->search(word);
 */