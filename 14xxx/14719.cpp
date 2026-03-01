#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int h, w; cin >> h >> w;
  vector<int> v(w);
  for (int i=0; i<w; i++) cin >> v[i];

  vector<int> a(w); a[0] = v[0];
  for (int i=1; i<w; i++) {
    a[i] = max(a[i-1], v[i]);
  }

  vector<int> b(w); b[w-1] = v[w-1];
  for (int i=w-2; i>=0; i--) {
    b[i] = max(b[i+1], v[i]);
  }

  int ans = 0;
  for (int i=0; i<w; i++) {
    ans += min(a[i], b[i]) - v[i];
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}