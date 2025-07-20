#include <iostream>
#include <vector>
using namespace std;

vector<int> parent;

void init_dsu(int n) {
  parent.resize(n);
  for (int i=0; i<n; i++) parent[i] = i;
}

int find_set(int v) {
  if (v == parent[v]) return v;
  return parent[v] = find_set(parent[v]);
}

void union_sets(int a, int b) {
  a = find_set(a);
  b = find_set(b);
  if (a != b) parent[b] = a;
}

void solve(void) {
  int n, m; cin >> n >> m;
  init_dsu(n);
  while (m--) {
    int u, v; cin >> u >> v; u--; v--;
    union_sets(u, v);
  }

  vector<int> a(n);
  for (int i=0; i<n; i++) cin >> a[i], a[i]--;

  int ans = 0;
  for (int i=1; i<n; i++) {
    if (find_set(a[i-1]) != find_set(a[i])) ans++;
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}