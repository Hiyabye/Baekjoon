#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<bool> v(n);
  for (int i=0; i<n; i++) {
    int s, t; cin >> s >> t;
    v[i] = (s > t);
  }

  int ans = 0, cnt = 0;
  for (int i=0; i<n; i++) {
    cnt = (v[i] ? cnt+1 : 0);
    ans = max(ans, cnt);
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}