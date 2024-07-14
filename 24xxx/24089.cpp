#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n, m; cin >> n >> m;
  vector<int> v(n+1, 0);
  for (int i=1; i<=n; i++) v[i] = i;

  while (m--) {
    int x, y; cin >> x >> y;
    v[x] = y;
  }

  for (int i=1; i<=n; i++) {
    cout << v[i] << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}