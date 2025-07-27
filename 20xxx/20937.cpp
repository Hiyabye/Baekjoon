#include <algorithm>
#include <iostream>
#include <map>
using namespace std;

void solve(void) {
  int n; cin >> n;
  map<int, int> cnt;
  while (n--) {
    int c; cin >> c;
    cnt[c]++;
  }

  int ans = 0;
  for (auto &[_, v] : cnt) {
    ans = max(ans, v);
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}