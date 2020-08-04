class MyHashSet {
public:
    /** Initialize your data structure here. */
    vector<int> v = vector<int>(1000001);

    MyHashSet() {

    }

    void add(int key) {
        v[key] = 1;
    }

    void remove(int key) {
        v[key] = 0;
    }

    /** Returns true if this set contains the specified element */
    bool contains(int key) {
        return v[key];
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */