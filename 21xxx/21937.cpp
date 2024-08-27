#include <iostream>
#include <unordered_set>
#include <vector>
using namespace std;

int n, m, x;
vector<vector<int>> adj;
unordered_set<int> s;

void dfs(int u) {
  for (int v : adj[u]) {
    if (s.find(v) != s.end()) continue;
    s.insert(v);
    dfs(v);
  }
}

void solve(void) {
  cin >> n >> m;
  adj.resize(n+1);
  while (m--) {
    int a, b; cin >> a >> b;
    adj[b].push_back(a);
  }
  cin >> x;

  s.insert(x);
  dfs(x);

  cout << s.size() - 1;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}