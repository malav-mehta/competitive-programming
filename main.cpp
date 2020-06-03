#include <cstdio>
#include <climits>
#include <cstdlib>
#include <vector>

using namespace std;
typedef vector<int> vi;

// O(n) solution, where n is the size of the array
int maxProduct(vi ar) {
    /*
     proposed solution: find the two max numbers in the array
        mx1 > biggest element in the array
        mx2 > 2nd biggest element in the array
     
     the largest absolute product of any two integers in the array
     will be the absolute product of these two numbers
     */
    int mx1 = INT_MIN;
    int mx2 = INT_MIN;
    
    for (int i = 0; i < ar.size(); ++i) {
        // check only the absolute value of each array element
        ar[i] = abs(ar[i]);
        
        // if cur is the max, then pass down max to 2nd and set cur as max
        if (ar[i] > mx1) {
            mx2 = mx1;
            mx1 = ar[i];
        }
        
        // otherwise, if cur is not max but is larger then 2nd, set 2nd as cur
        else if (ar[i] > mx2) mx2 = ar[i];
    }
    
    // return the product of the two largest elements in the array
    return mx1 * mx2;
}

int main() {
    // driver code for testing
    vi ar;
    int n, tmp;
    scanf("%d", &n);
    
    // read array of size n
    for (int i = 0; i < n;  ++i) {
        scanf("%d", &tmp);
        ar.push_back(tmp);
    }
    
    // get max product and print it
    int prod = maxProduct(ar);
    printf("%d\n", prod);
    return 0;
}
