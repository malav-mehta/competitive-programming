#include <cstdio>
#include <vector>
using namespace std;

bool isDistinct(int year) {
  int p1 = year / 1000;
  int p2 = year / 100 - p1 * 10;
  int p3 = year / 10 - p2 * 10 - p1 * 100;
  int p4 = year - p3 * 10 - p2 * 100 - p1 * 1000;
  return !(p1 == p2 || p1 == p3 || p1 == p4 || p2 == p3 || p2 == p4 || p3 == p4);
}

int main() {
  int y;
  scanf("%d", &y);
  while (!isDistinct(++y)) {
  };
  printf("%d", y);
  return 0;
}
