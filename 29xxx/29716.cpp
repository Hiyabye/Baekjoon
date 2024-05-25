#include <iostream>
#include <string>
using namespace std;

int calc(const string &s) {
  int ret = 0;
  for (char c : s) {
    if ('A' <= c && c <= 'Z') ret += 4;
    else if (c == ' ') ret++;
    else ret += 2;
  }
  return ret;
}

void solve(void) {
  int j, n; cin >> j >> n;
  cin.ignore();

  int ans = 0;
  while (n--) {
    string s; getline(cin, s);
    if (calc(s) <= j) ans++;
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}