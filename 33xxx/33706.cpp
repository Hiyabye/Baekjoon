#include <iostream>
#include <vector>
using namespace std;

bool solve(void) {
  int n, m; cin >> n >> m;
  vector<vector<int>> adj(n);
  while (m--) {
    int a, b; cin >> a >> b; a--; b--;
    adj[b].push_back(a);
  }

  for (int i=1; i<n; i++) {
    if (adj[i].empty()) return false;
  }
  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << (solve() ? "YES" : "NO");
  return 0;
}