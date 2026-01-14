#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<int> a(n), b(n);
  for (int i=0; i<n; i++) {
    cin >> a[i] >> b[i]; a[i]--; b[i]--;
  }

  int m; cin >> m;
  vector<bool> v(n, true);
  while (m--) {
    int c; cin >> c; c--;
    v[c] = false;
  }

  int ans = 0;
  for (int i=0; i<n; i++) {
    if (a[i] < 0 || b[i] < 0) continue;
    if (v[i] && v[a[i]] && v[b[i]]) ans++;
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}