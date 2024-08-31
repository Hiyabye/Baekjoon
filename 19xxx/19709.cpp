#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n, m; cin >> n >> m;
  vector<int> k(m);
  for (int i=0; i<m; i++) cin >> k[i];
  sort(k.begin(), k.end());

  int ans = 0;
  for (int i=0; i<m && n>=k[i]; i++) {
    n -= k[i];
    ans++;
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}