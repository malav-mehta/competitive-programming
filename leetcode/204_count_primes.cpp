class Solution {
public:
    int countPrimes(int n) {
       if (n == 0)
           return 0;
        
        int ans = 0;
        vector<int> primes(++n, 1);
        
        primes[0] = 0;
        primes[1] = 0;
        
        for (int i = 4; i < n; i += 2)
            primes[i] = 0;
        
        for (int i = 3; i < n; i += 2)
            if (primes[i])
                for (int j = i + i; j < n; j += i)
                    primes[j] = 0;
        
        for (int i = 0; i < n - 1; ++i)
            ans += primes[i];
        
        return ans;
    }
};
