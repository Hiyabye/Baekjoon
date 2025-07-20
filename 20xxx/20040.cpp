#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

vector<int> parent, sz;

void init_dsu(int n) {
  parent.resize(n);
  sz.resize(n);
  for (int i=0; i<n; i++) {
    parent[i] = i;
    sz[i] = 1;
  }
}

int find_set(int v) {
  if (v == parent[v]) return v;
  return parent[v] = find_set(parent[v]);
}

void union_sets(int a, int b) {
  a = find_set(a);
  b = find_set(b);
  if (a != b) {
    if (sz[a] < sz[b]) swap(a, b);
    parent[b] = a;
    sz[a] += sz[b];
  }
}

void solve(void) {
  int n, m; cin >> n >> m;
  init_dsu(n);

  int ans = 1, ok = 1;
  while (m--) {
    int u, v; cin >> u >> v;
    if (find_set(u) == find_set(v)) ok = 0;
    union_sets(u, v);
    ans += ok;
  }
  cout << (ok ? 0 : ans);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}