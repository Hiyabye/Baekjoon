#include <iostream>
using namespace std;

int calc(int n, int base) {
  int ret = 0;
  while (n) {
    ret += n % base;
    n /= base;
  }
  return ret;
}

void solve(void) {
  for (int i=1000; i<10000; i++) {
    int dec = calc(i, 10);
    int d12 = calc(i, 12);
    int d16 = calc(i, 16);
    if (dec == d12 && d12 == d16) cout << i << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}