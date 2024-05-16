#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n, m, q; cin >> n >> m >> q;
  vector<int> a(n, 0), b(m, 0);

  while (q--) {
    int x, y, z; cin >> x >> y >> z; y--;
    if (x == 1) a[y] += z;
    else b[y] += z;
  }

  for (int i=0; i<n; i++) {
    for (int j=0; j<m; j++) {
      cout << a[i] + b[j] << " ";
    }
    cout << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}