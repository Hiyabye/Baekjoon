#include <iostream>
#include <vector>
using namespace std;

inline int start(int m, const vector<int> &a) {
  for (int i=0; i<m; i++) {
    if (a[i] == 2 || a[i] == 3) return i;
  }
  return -1;
}

void solve(void) {
  int m, n; cin >> m >> n;
  vector<int> a(m);
  for (int i=0; i<m; i++) cin >> a[i];

  int s = start(m, a);
  int d = a[s] == 2 ? 1 : -1;
  int ans = 0; a[s] = 1;

  while (n--) {
    d = (s == 0) ? 1 : (s == m-1) ? -1 : d;
    s += d;
    if (a[s] == 0) ans++;
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