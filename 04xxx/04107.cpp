#include <iostream>
#include <vector>
using namespace std;

bool solve(void) {
  int n, m, k; cin >> n >> m >> k;
  if (n == 0 && m == 0 && k == 0) return false;
  vector<int> v(k);
  for (int i=0; i<k; i++) cin >> v[i];

  int ans = 0, cur = n;
  for (int i=0; i<m; i++) {
    ans += cur;
    cur += v[i % k];
  }
  cout << ans << "\n";

  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  while (solve());
  return 0;
}