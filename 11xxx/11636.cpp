#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  vector<int> v; int x;
  do {
    cin >> x;
    v.push_back(x);
  } while (x != 0);

  int ans = 0;
  for (int i=1; i<v.size(); i++) {
    ans += max(0, v[i] - 2 * v[i-1]);
  }
  cout << ans << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while (t--) solve();
  return 0;
}