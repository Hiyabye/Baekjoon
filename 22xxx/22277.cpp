#include <iostream>
#include <string>
using namespace std;

inline int input(void) {
  string s; cin >> s;
  return stod(s.substr(1)) * 100 + 0.5;
}

void solve(void) {
  int n; cin >> n;

  int ans = 0, cur = input();
  while (n--) {
    cur += input();
    if (cur % 100) ans++;
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}