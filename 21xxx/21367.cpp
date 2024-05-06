#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n, q; cin >> n >> q;
  vector<int> k(n), p(q);
  for (int i=0; i<n; i++) cin >> k[i];
  for (int i=0; i<q; i++) cin >> p[i];

  for (int i=1; i<n; i++) k[i] += k[i-1];
  for (int i=0; i<q; i++) {
    int ans = upper_bound(k.begin(), k.end(), p[i]) - k.begin() + 1;
    cout << (ans > n ? -1 : ans) << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}