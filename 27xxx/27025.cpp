#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<bool> v(n);
  for (int i=0; i<n; i++) {
    int a, b; cin >> a >> b;
    v[i] = a | b;
  }

  int ans = 0, cur = 0;
  for (int i=0; i<n; i++) {
    cur = v[i] ? 0 : cur + 1;
    ans = max(ans, cur << 1);
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}