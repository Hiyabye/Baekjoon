#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n, c; cin >> n >> c;

  vector<bool> v(c+1, false);
  while (n--) {
    int t; cin >> t;
    for (int i=t; i<=c; i+=t) {
      v[i] = true;
    }
  }

  int ans = 0;
  for (int i=1; i<=c; i++) {
    if (v[i]) ans++;
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}