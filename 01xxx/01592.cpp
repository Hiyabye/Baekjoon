#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n, m, l; cin >> n >> m >> l;

  vector<int> v(n, 0);
  int ans = 0, idx = 0;
  while (v[idx]++ < m-1) {
    ans++;
    idx += (v[idx] & 1 ? l : n-l);
    idx %= n;
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}