#include <iostream>
#include <map>
using namespace std;

void solve(void) {
  int n; cin >> n;

  map<int, int> mp;
  while (n--) {
    int x; cin >> x;
    mp[x]++;
  }

  int ans = 0, cnt = 0;
  for (auto &p : mp) {
    if (p.first == 0) continue;
    if (p.second > cnt) {
      cnt = p.second;
      ans = p.first;
    } else if (p.second == cnt) {
      ans = 0;
    }
  }
  cout << (ans ? to_string(ans) : "skipped");
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}