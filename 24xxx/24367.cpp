#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int m, n; cin >> m >> n;
  vector<int> t(4);
  for (int i=0; i<4; i++) cin >> t[i];
  sort(t.begin(), t.end());

  if (m >= 4 && t[0] + t[1] + t[2] + t[3] <= n) cout << 1;
  else if (m >= 3 && t[0] + t[1] + t[2] <= n) cout << 2;
  else if (t[0] + t[1] <= n && t[2] + t[3] <= n) cout << 2;
  else if (t[0] + t[2] <= n && t[1] + t[3] <= n) cout << 2;
  else if (t[0] + t[3] <= n && t[1] + t[2] <= n) cout << 2;
  else if (m >= 2 && t[0] + t[1] <= n) cout << 3;
  else cout << 4;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}