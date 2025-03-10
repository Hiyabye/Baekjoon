#include <cmath>
#include <iostream>
using namespace std;

inline int lsb(int x) {
  return x & -x;
}

inline int msb(int x) {
  x |= (x >> 1);
  x |= (x >> 2);
  x |= (x >> 4);
  x |= (x >> 8);
  x |= (x >> 16);
  return x - (x >> 1);
}

void solve(void) {
  int k; cin >> k;

  if (lsb(k) == k) cout << k << " " << 0;
  else cout << (msb(k) << 1) << " " << log2((msb(k) << 1) / lsb(k));
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}