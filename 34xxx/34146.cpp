#include <iostream>
#include <map>
using namespace std;

bool solve(void) {
  int n, m; cin >> n >> m;
  map<int, int> mp;
  for (int i=0; i<n; i++) for (int j=0; j<m; j++) {
    int a; cin >> a;
    mp[a]++;
  }

  int odd = 0;
  for (const auto &[_, x] : mp) {
    if (x & 1) odd++;
  }
  return (m & 1 ? odd <= n : odd == 0);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << (solve() ? "YES" : "NO");
  return 0;
}