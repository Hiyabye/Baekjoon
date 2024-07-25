#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n, q; cin >> n >> q;

  int cnt = 0;
  vector<bool> v(n, false);
  for (int i=0; i<n; i+=10) {
    if (i < n) v[i] = true, cnt++;
    if (i+3 < n) v[i+3] = true, cnt++;
    if (i+6 < n) v[i+6] = true, cnt++;
  }

  while (q--) {
    int x; cin >> x; x--;
    if (v[x]) {
      v[x] = false;
      cnt--;
    } else {
      v[x] = true;
      cnt++;
    }
    cout << cnt << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}