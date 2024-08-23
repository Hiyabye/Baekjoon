#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n, m; cin >> n >> m;
  vector<int> v(n);
  for (int i=0; i<n; i++) cin >> v[i];

  int ans = 0, cur = 0;
  for (int i=0; i<n; i++) {
    if (cur < v[i]) cur = m, ans++;
    cur -= v[i];
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}