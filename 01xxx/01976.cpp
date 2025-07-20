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

int get_set_size(int v) {
  return sz[find_set(v)];
}

bool solve(void) {
  int n; cin >> n;
  int m; cin >> m;
  init_dsu(n);
  for (int i=0; i<n; i++) for (int j=0; j<n; j++) {
    int x; cin >> x;
    if (x) union_sets(i, j);
  }

  vector<int> v(m);
  for (int i=0; i<m; i++) cin >> v[i], v[i]--;
  for (int i=1; i<m; i++) {
    if (find_set(v[i-1]) != find_set(v[i])) return false;
  }
  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << (solve() ? "YES" : "NO");
  return 0;
}