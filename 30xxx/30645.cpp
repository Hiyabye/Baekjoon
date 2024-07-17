#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int r, c; cin >> r >> c;
  int n; cin >> n;
  vector<int> h(n);
  for (int i=0; i<n; i++) cin >> h[i];
  sort(h.begin(), h.end(), greater<int>());

  int ans = min(c, n), idx = 0;
  vector<int> cur(c);
  for (int i=0; i<min(c, n); i++) {
    cur[i] = h[i];
  }

  for (int i=min(c, n); i<n; i++) {
    if (h[i] >= cur[idx]) continue;
    cur[idx] = h[i];
    ans++;
    idx = (idx + 1) % c;
  }
  cout << min(ans, r*c);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}