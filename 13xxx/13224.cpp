#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  string s; cin >> s;

  int l = 1, m = 0, r = 0;
  for (char c : s) {
    if (c == 'A') swap(l, m);
    if (c == 'B') swap(m, r);
    if (c == 'C') swap(l, r);
  }

  if (l) cout << 1;
  if (m) cout << 2;
  if (r) cout << 3;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}