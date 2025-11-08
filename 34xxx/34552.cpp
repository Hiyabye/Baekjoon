#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  vector<int> m(11);
  for (int i=0; i<11; i++) cin >> m[i];
  int n; cin >> n;

  int ans = 0;
  while (n--) {
    int b, s; double l; cin >> b >> l >> s;
    ans += (l >= 2.0 && s >= 17) * m[b];
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}