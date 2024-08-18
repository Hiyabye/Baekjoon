#include <cmath>
#include <iostream>
using namespace std;

int gcd(int a, int b) {
  return b ? gcd(b, a % b) : a;
}

void solve(void) {
  int n, m, k; cin >> n >> m >> k;

  int ans = 0;
  for (int x1=0; x1<=n; x1++) for (int y1=0; y1<=m; y1++) {
    for (int x2=0; x2<=n; x2++) for (int y2=0; y2<=m; y2++) {
      if (gcd(abs(x2-x1), abs(y2-y1)) == k-1) ans++;
    }
  }
  cout << ans / 2;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}