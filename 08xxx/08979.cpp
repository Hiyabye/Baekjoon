#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n, k; cin >> n >> k;
  vector<int> g(n+1), s(n+1), b(n+1);
  for (int i=0; i<n; i++) {
    int x; cin >> x;
    cin >> g[x] >> s[x] >> b[x];
  }

  int ans = 0;
  for (int i=1; i<=n; i++) {
    if (i == k) continue;
    if (g[i] > g[k]) ans++;
    else if (g[i] == g[k] && s[i] > s[k]) ans++;
    else if (g[i] == g[k] && s[i] == s[k] && b[i] > b[k]) ans++;
  }
  cout << ans + 1;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}