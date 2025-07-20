#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

vector<int> parent;

void init_dsu(int n) {
  parent.resize(n+1);
  for (int i=0; i<=n; i++) parent[i] = i;
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
  int g; cin >> g;
  init_dsu(g);
  int p; cin >> p;
  vector<int> v(p);
  for (int i=0; i<p; i++) cin >> v[i];

  int ans = 0;
  for (int i=0; i<p; i++) {
    int x = find_set(v[i]);
    if (x == 0) break;
    union_sets(x-1, x);
    ans++;
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}