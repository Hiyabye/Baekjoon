#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n, m; cin >> n >> m;
  vector<long long> a(n), b(m);
  for (int i=0; i<n; i++) cin >> a[i];
  for (int i=0; i<m; i++) cin >> b[i];

  for (int i=0; i<m; i++) {
    long long cur = 0;
    for (int j=0; j<n; j++) {
      if (cur >= a[j]) continue;
      long long delta = min(a[j], b[i]) - cur;
      a[j] += delta; cur += delta;
      if (cur == b[i]) break;
    }
  }

  for (int i=0; i<n; i++) {
    cout << a[i] << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}