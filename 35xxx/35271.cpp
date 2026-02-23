#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n, m; cin >> n >> m;
  vector<int> a(m+1, 0);
  for (int i=1; i<=m; i++) cin >> a[i];

  while (n--) {
    int x, y, z; cin >> x >> y >> z;
    if (a[x]) cout << x, a[x]--;
    else if (a[y]) cout << y, a[y]--;
    else if (a[z]) cout << z, a[z]--;
    else cout << -1;
    cout << " ";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}