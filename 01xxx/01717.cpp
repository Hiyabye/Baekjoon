#include <iostream>
#include <vector>
using namespace std;

int find(vector<int> &v, int a) {
  if (v[a] == a) return a;
  return v[a] = find(v, v[a]);
}

void add(vector<int> &v, int a, int b) {
  a = find(v, a);
  b = find(v, b);

  if (a == b) return;
  if (a < b) swap(a, b);
  v[a] = b;
}

bool check(vector<int> &v, int a, int b) {
  return find(v, a) == find(v, b);
}

void solve(void) {
  int n, m; cin >> n >> m;

  vector<int> v(n+1);
  for (int i=1; i<=n; i++) v[i] = i;
  while (m--) {
    int com, a, b; cin >> com >> a >> b;
    if (com == 0) add(v, a, b);
    else cout << (check(v, a, b) ? "YES" : "NO") << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}