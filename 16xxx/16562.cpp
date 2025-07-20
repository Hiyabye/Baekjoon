#include <algorithm>
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
  int n, m, k; cin >> n >> m >> k;
  vector<int> a(n);
  for (int i=0; i<n; i++) cin >> a[i];

  init_dsu(n);
  while (m--) {
    int v, w; cin >> v >> w; v--; w--;
    union_sets(v, w);
  }

  for (int i=0; i<n; i++) {
    int p = find_set(i);
    a[p] = min(a[p], a[i]);
  }

  int ans = 0;
  for (int i=0; i<n; i++) {
    int p = find_set(i);
    ans += a[p];
    a[p] = 0;
  }

  if (ans > k) cout << "Oh no";
  else cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}