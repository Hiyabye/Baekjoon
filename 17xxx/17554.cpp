#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  int k; cin >> k;

  int ans = 0;
  vector<bool> v(n+1, true);
  while (k--) {
    int a; cin >> a;
    for (int i=a; i<=n; i+=a) v[i] = !v[i];
    ans = max<int>(ans, count(v.begin(), v.end(), false));
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}