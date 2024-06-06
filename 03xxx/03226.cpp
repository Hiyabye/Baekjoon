#include <iostream>
#include <string>
using namespace std;

inline int time(const string &s) {
  return 60 * stoi(s.substr(0, 2)) + stoi(s.substr(3, 2));
}

inline int next(int t) {
  return (t + 1) % 1440;
}

inline int calc(int t) {
  return (420 <= t && t < 1140) ? 10 : 5;
}

void solve(void) {
  int n; cin >> n;

  int ans = 0;
  while (n--) {
    string s; int d; cin >> s >> d;
    int t = time(s);
    while (d--) {
      ans += calc(t);
      t = next(t);
    }
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}