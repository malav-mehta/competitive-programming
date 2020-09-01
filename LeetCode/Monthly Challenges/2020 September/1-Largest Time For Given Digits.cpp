class Solution {
public:
    string largestTimeFromDigits(vector<int>& A) {
        int t = -1;
        sort(A.begin(), A.end());
        
        do {
            int hour = A[0] * 10 + A[1];
            int minute = A[2] * 10 + A[3];
            if (hour < 24 && minute < 60) t = max(t, hour * 60 + minute);
        } while (next_permutation(A.begin(), A.end()));
        
        if (t == -1) return "";
        else {
            ostringstream oss;
            oss << setw(2) << setfill('0') << t / 60 << ":"
                << setw(2) << setfill('0') << t % 60;
            return oss.str();
        }
    }
};

