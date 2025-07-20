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

void solve(int idx) {
  cout << "Scenario " << idx << ":\n";
  int n; cin >> n;
  init_dsu(n);

  int k; cin >> k;
  while (k--) {
    int a, b; cin >> a >> b;
    union_sets(a, b);
  }

  int m; cin >> m;
  while (m--) {
    int u, v; cin >> u >> v;
    cout << (find_set(u) == find_set(v)) << "\n";
  }
  cout << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  for (int i=1; i<=t; i++) solve(i);
  return 0;
}