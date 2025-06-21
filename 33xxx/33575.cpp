#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n, m, a, b; cin >> n >> m >> a >> b;
  vector<int> t(n);
  for (int i=0; i<n; i++) cin >> t[i];

  vector<int> v(m+1, 0);
  while (a--) {
    int l; cin >> l;
    v[l] = 1;
  }
  while (b--) {
    int h; cin >> h;
    v[h] = -1;
  }

  int ans = 0, cur = 0;
  for (int x : t) {
    if (v[x] > 0) {
      if (cur < 0) cur = 1;
      else cur++;
      if (cur == 3) ans += 3;
      else if (cur > 3) ans++;
    } else if (v[x] < 0) {
      if (cur > 0) cur = -1;
      else cur--;
      if (cur == -3) ans -= 3;
      else if (cur < -3) ans--;
    } else {
      cur = 0;
    }
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}