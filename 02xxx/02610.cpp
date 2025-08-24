#include <algorithm>
#include <iostream>
#include <map>
#include <vector>
using namespace std;

vector<int> parent;

inline void init_dsu(int n) {
  parent.resize(n+1);
  for (int i=0; i<=n; i++) parent[i] = i;
}

inline int find_set(int v) {
  if (v == parent[v]) return v;
  return parent[v] = find_set(parent[v]);
}

inline void union_sets(int a, int b) {
  a = find_set(a);
  b = find_set(b);
  if (a != b) parent[b] = a;
}

inline int calc(const vector<vector<int>> &v, const vector<int> &w, int idx) {
  int ret = 0;
  for (int x : w) ret = max(ret, v[idx][x]);
  return ret;
}

void solve(void) {
  int n; cin >> n;
  int m; cin >> m;
  init_dsu(n);
  vector<vector<int>> v(n+1, vector<int>(n+1, 1e9));
  while (m--) {
    int a, b; cin >> a >> b;
    v[a][b] = v[b][a] = 1;
    union_sets(a, b);
  }

  for (int i=1; i<=n; i++) v[i][i] = 0;
  for (int k=1; k<=n; k++) for (int i=1; i<=n; i++) for (int j=1; j<=n; j++) {
    if (i == j || j == k || k == 1) continue;
    v[i][j] = v[j][i] = min(v[i][j], v[i][k] + v[k][j]);
  }

  map<int, vector<int>> mp;
  for (int i=1; i<=n; i++) mp[find_set(i)].push_back(i);

  vector<int> ans;
  for (const auto &[_, w] : mp) {
    int idx = w[0], mn = calc(v, w, w[0]);
    for (int i=1; i<w.size(); i++) {
      if (calc(v, w, w[i]) < mn) {
        idx = w[i];
        mn = calc(v, w, w[i]);
      }
    }
    ans.push_back(idx);
  }
  sort(ans.begin(), ans.end());

  cout << ans.size() << "\n";
  for (int x : ans) cout << x << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}