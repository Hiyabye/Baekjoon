#include <iostream>
using namespace std;

void solve(void) {
  int n, w, d, r;

  while (cin >> n >> w >> d >> r) {
    int ans = ((n - 1) * n / 2 * w - r) / d;
    cout << (ans ? ans : n) << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}