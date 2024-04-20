#include <iostream>
#include <vector>
using namespace std;

bool solve(void) {
  int m, n; cin >> m >> n;

  vector<bool> v(m, false);
  while (n--) {
    int l, r; cin >> l >> r; l--; r--;
    for (int j=l; j<=r; j++) v[j] = true;
  }

  for (int i=0; i<m; i++) {
    if (!v[i]) return false;
  }
  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << (solve() ? "YES" : "NO");
  return 0;
}