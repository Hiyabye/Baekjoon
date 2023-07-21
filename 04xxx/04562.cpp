#include <bits/stdc++.h>

using namespace std;

void solve(void) {
  int n, x, y;
  cin >> n;
  for (int i=0; i<n; i++) {
    cin >> x >> y;
    if (x >= y) cout << "MMM BRAINS\n";
    else cout << "NO BRAINS\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}