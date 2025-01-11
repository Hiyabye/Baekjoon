#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  string s; cin >> s;

  int mx = 0, cnt = 0;
  for (char c : s) {
    cnt = (c == '0') ? cnt + 1 : 0;
    mx = max(mx, cnt);
  }
  cout << (mx + 1) / 2;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}