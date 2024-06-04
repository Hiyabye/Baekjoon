#include <iostream>
#include <string>
using namespace std;

inline int calc(const string &s) {
  return stoi(s.substr(0, 2)) * 3600 + stoi(s.substr(3, 2)) * 60 + stoi(s.substr(6, 2));
}

inline bool check(int t) {
  return (t / 3600 + (t % 3600) / 60 + t % 60) % 3 == 0;
}

void solve(void) {
  string a, b; cin >> a >> b;

  int c = calc(a), d = calc(b), ans = 0;
  if (c > d) d += 86400;
  while (c <= d) {
    ans += check(c++ % 86400);
  }
  cout << ans << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t = 3;
  while (t--) solve();
  return 0;
}