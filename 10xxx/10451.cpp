#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<int> v(n);
  for (int i=0; i<n; i++) {
    int x; cin >> x; x--;
    v[i] = x;
  }

  int ans = 0;
  vector<bool> visited(n, false);
  for (int i=0; i<n; i++) {
    if (visited[i]) continue;
    visited[i] = true;
    int j = i;
    while (!visited[v[j]]) {
      visited[v[j]] = true;
      j = v[j];
    }
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