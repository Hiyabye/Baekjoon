#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n, k; cin >> n >> k;
  vector<int> g(n);
  for (int i=0; i<n; i++) cin >> g[i];
  sort(g.begin(), g.end(), greater<int>());

  int ans = 0;
  for (int i=0; i<k; i++) ans += g[i];
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}