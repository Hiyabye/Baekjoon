#include <iostream>
#include <vector>
using namespace std;

inline bool check(int n, vector<int> &c) {
  for (int i=0; i<n; i++) if (c[i] & 1) c[i]++;
  for (int i=1; i<n; i++) if (c[i] != c[i-1]) return false;
  return true;
}

void solve(void) {
  int n; cin >> n;
  vector<int> c(n);
  for (int i=0; i<n; i++) cin >> c[i];

  int ans = 0;
  while (!check(n, c)) {
    vector<int> d(n);
    for (int i=0; i<n; i++) d[i] = c[i] / 2;
    for (int i=0; i<n; i++) c[i] = d[i] + d[(i+n-1)%n];
    ans++;
  }
  cout << ans << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while (t--) solve();
  return 0;
}