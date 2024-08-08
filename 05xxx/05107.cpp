#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>
using namespace std;

bool solve(int idx) {
  int n; cin >> n;
  if (n == 0) return false;

  vector<int> adj(n); int cnt = 0;
  unordered_map<string, int> mp;
  for (int i=0; i<n; i++) {
    string a, b; cin >> a >> b;
    if (mp.find(a) == mp.end()) mp[a] = cnt++;
    if (mp.find(b) == mp.end()) mp[b] = cnt++;
    adj[mp[a]] = mp[b];
  }

  int ans = 0;
  vector<bool> visited(n, false);
  for (int i=0; i<n; i++) {
    if (visited[i]) continue;
    visited[i] = true;
    int cur = i;
    while (!visited[adj[cur]]) {
      visited[adj[cur]] = true;
      cur = adj[cur];
    }
    if (adj[cur] == i) ans++;
  }
  cout << idx << " " << ans << "\n";

  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int idx = 1;
  while (solve(idx++));
  return 0;
}