#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n, m; cin >> n >> m;

  vector<int> a(n+1, 0);
  for (int i=1; i<=n; i++) {
    int x; cin >> x;
    a.insert(a.begin() + x, i);
  }

  vector<int> b(m+1, 0);
  for (int i=1; i<=m; i++) {
    b[i] = a[i];
  }

  vector<int> c(m+1, 0);
  for (int i=m; i>=1; i--) {
    int x; cin >> x;
    c.insert(c.begin() + x, b[i]);
  }

  for (int i=1; i<=3; i++) {
    cout << c[i] << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}