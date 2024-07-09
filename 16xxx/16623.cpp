#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n, m; cin >> n >> m;
  vector<int> v(m);
  for (int i=0; i<m; i++) cin >> v[i];

  int ans = 0;
  for (int i=1; i<m; i++) {
    if (v[i] < v[i-1]) ans++;
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}