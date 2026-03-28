#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

inline int calc(const string &s) {
  int h = stoi(s.substr(0, s.find(':')));
  int m = stoi(s.substr(s.find(':') + 1));
  return h * 60 + m;
}

void solve(void) {
  int n; cin >> n;

  bool flag = false;
  int mn = 2000, mx = -1;
  while (n--) {
    string s; cin >> s;
    int t = calc(s);
    if (390 <= t && t <= 1140) {
      flag = true;
      mn = min(mn, t); mx = max(mx, t);
    }
  }

  if (!flag) cout << 0;
  else if (mn <= 600) cout << (mx <= 960 ? 24000 : 36000);
  else if (mn <= 960) cout << (mx <= 960 ? 16800 : 24000);
  else cout << 24000;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}