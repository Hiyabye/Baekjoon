#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<long long> v(n, 0);
  for (int i=0; i<n; i++) {
    int k; cin >> k;
    while (k--) {
      int t; cin >> t;
      v[i] |= (1LL << t);
    }
  }

  int m; cin >> m;
  while (m--) {
    int p; cin >> p;
    long long mask = 0;
    while (p--) {
      int q; cin >> q;
      mask |= (1LL << q);
    }
    int cnt = 0;
    for (int i=0; i<n; i++) {
      if ((v[i] & mask) == v[i]) cnt++;
    }
    cout << cnt << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}