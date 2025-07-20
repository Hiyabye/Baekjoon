#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

vector<int> parent, sz;

void init_dsu(int n) {
  parent.resize(n+1);
  sz.resize(n+1);
  for (int i=0; i<=n; i++) {
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

bool check(const vector<int> &v) {
  for (int x : v) {
    if (find_set(0) == find_set(x)) return false;
  }
  return true;
}

void solve(void) {
  int n, m; cin >> n >> m;
  init_dsu(n);

  int p; cin >> p;
  while (p--) {
    int x; cin >> x;
    union_sets(0, x);
  }

  vector<vector<int>> v(m);
  for (int i=0; i<m; i++) {
    int k; cin >> k;
    v[i].resize(k);
    for (int j=0; j<k; j++) cin >> v[i][j];
    for (int j=1; j<k; j++) union_sets(v[i][0], v[i][j]);
  }

  int ans = 0;
  for (int i=0; i<m; i++) {
    if (check(v[i])) ans++;
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}