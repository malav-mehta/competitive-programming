#include <bits/stdc++.h>
using namespace std;

int sum(vector<int> nums) {
  int ans(0);
  for (int i = 0; i < nums.size(); ++i)
    ans += nums[i];

  return ans;
}

int main() {
  int n, m;
  vector<int> nums;
  scanf("%d", &n);

  while (n--) {
    scanf("%d", &m);
    if (m)
      nums.push_back(m);
    else
      nums.pop_back();
  }

  printf("%d", sum(nums));
  return 0;
}
