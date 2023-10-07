#include <iostream>
#include <vector>
#include <queue>
#include <unordered_map>
#define MOD 1000000007
using namespace std;

void solve(void) {
  int n, m; cin >> n >> m;
  vector<vector<int> > adj(n);
  for (int i=0; i<m; i++) {
    int a, b; cin >> a >> b;
    a--; b--;
    adj[a].push_back(b);
    adj[b].push_back(a);
  }

  vector<int> dist(n, -1);
  dist[0] = 0;
  queue<int> q;
  q.push(0);
  while (!q.empty()) {
    int cur = q.front();
    q.pop();
    for (int next : adj[cur]) {
      if (dist[next] == -1) {
        dist[next] = dist[cur] + 1;
        q.push(next);
      }
    }
  }

  unordered_map<int, int> cnt;
  for (int i=0; i<n; i++) {
    if (dist[i] == -1) continue;
    else if (cnt.find(dist[i]) == cnt.end()) cnt[dist[i]] = 1;
    else cnt[dist[i]]++;
  }

  long long ans = 1;
  for (auto it=cnt.begin(); it!=cnt.end(); it++) {
    ans *= (it->second + 1);
    ans %= MOD;
  }
  cout << ans - 1;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL); cout.tie(NULL);

  solve();
  return 0;
}