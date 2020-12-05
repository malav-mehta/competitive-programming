class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> r(n);
        for (int i = 0; i < n; ++i) r[i] = to_string(i + 1);
        for (int i = 2; i < n; i += 3) r[i] = "Fizz";
        for (int i = 4; i < n; i += 5) r[i] = "Buzz";
        for (int i = 14; i < n; i += 15) r[i] = "FizzBuzz";
        return r;
    }
};
