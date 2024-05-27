#include <iostream>
#include <vector>
using namespace std;

int find(vector<int> &p, int x) {
  if (p[x] == x) return x;
  return p[x] = find(p, p[x]);
}

void merge(vector<int> &p, int x, int y) {
  x = find(p, x);
  y = find(p, y);
  if (x == y) return;
  p[y] = x;
}

bool united(vector<int> &p, int x, int y) {
  x = find(p, x);
  y = find(p, y);
  if (x == y) return true;
  return false;
}

void solve(void) {
  int n; cin >> n;
  vector<int> p(n+1);
  for (int i=1; i<=n; i++) p[i] = i;
  for (int i=2; i<n; i++) {
    int u, v; cin >> u >> v;
    merge(p, u, v);
  }

  for (int i=2; i<=n; i++) {
    if (united(p, 1, i)) continue;
    cout << "1 " << i;
    return;
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}