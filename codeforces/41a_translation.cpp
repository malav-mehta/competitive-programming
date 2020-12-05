#include <iostream>
using namespace std;

int main() {
  string in, out, rev;
  cin >> in >> out;

  for (int i = in.length() - 1; i >= 0; --i)
    rev += in[i];

  if (out == rev)
    cout << "YES";
  else
    cout << "NO";
  return 0;
}
