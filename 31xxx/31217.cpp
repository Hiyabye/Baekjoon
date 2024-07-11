#include <iostream>
#include <vector>
#define MOD 1000000007
using namespace std;

inline long long nC3(long long n) {
  return n * (n-1) * (n-2) / 6;
}

void solve(void) {
  int n, m; cin >> n >> m;
  vector<int> deg(n, 0);
  while (m--) {
    int u, v; cin >> u >> v; u--; v--;
    deg[u]++; deg[v]++;
  }

  long long ans = 0;
  for (int i=0; i<n; i++) {
    ans = (ans + nC3(deg[i])) % MOD;
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}