#include <iostream>
using namespace std;

void solve(void) {
  int x, n; cin >> x >> n;
  for (int i=0; i<n; i++) {
    x = (x & 1 ? x << 1 : x >> 1) ^ 6;
  }
  cout << x;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}