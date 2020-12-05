#include <iostream>
using namespace std;

int main() {
  cin.sync_with_stdio(0);
  cin.tie(0);

  int sq[4][4];
  for (int i = 0; i < 4; ++i)
    for (int j = 0; j < 4; ++j)
      cin >> sq[i][j];

  int sum = sq[0][0] + sq[0][1] + sq[0][2] + sq[0][3];
  int r, c;
  for (int i = 0; i < 4; ++i) {
    r = c = 0;
    for (int j = 0; j < 4; ++j) {
      r += sq[i][j];
      c += sq[j][i];
    }

    if (r != sum || c != sum) {
      cout << "not ";
      break;
    }
  }

  cout << "magic\n";
  return 0;
}
