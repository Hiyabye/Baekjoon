#include <iostream>
#include <map>
#include <vector>
using namespace std;

int n, m, cnt = 0;
map<int, vector<int>> adj;
vector<bool> visited;

inline bool check(int cur) {
  if (cnt == 5) return true;
  for (int nxt : adj[cur]) {
    if (visited[nxt]) continue;
    visited[nxt] = true; cnt++;
    if (check(nxt)) return true;
    visited[nxt] = false; cnt--;
  }
  return false;
}

bool solve(void) {
  cin >> n >> m;
  visited.resize(n, false);
  while (m--) {
    int a, b; cin >> a >> b;
    adj[a].push_back(b); adj[b].push_back(a);
  }

  for (int i=0; i<n; i++) {
    visited[i] = true; cnt++;
    if (check(i)) return true;
    visited[i] = false; cnt--;
  }
  return false;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << solve();
  return 0;
}