#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n;
vector<pair<int, int> > a;
vector<bool> b;

int backtrack(int cnt) {
  if (!cnt) {
    int sour = 1, bitter = 0;
    for (int i=0; i<n; i++) {
      if (!b[i]) continue;
      sour *= a[i].first;
      bitter += a[i].second;
    }
    return abs(sour - bitter);
  }

  int ret = 1e9;
  for (int i=0; i<n; i++) {
    if (b[i]) continue;
    b[i] = true;
    ret = min(ret, backtrack(cnt-1));
    b[i] = false;
  }
  return ret;
}

void solve(void) {
  cin >> n;
  a.resize(n);
  b.resize(n, false);
  for (int i=0; i<n; i++) {
    cin >> a[i].first >> a[i].second;
  }

  int ans = 1e9;
  for (int i=1; i<=n; i++) {
    ans = min(ans, backtrack(i));
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}