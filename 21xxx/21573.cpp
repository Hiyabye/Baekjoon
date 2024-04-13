#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  int r, c; cin >> r >> c;
  string s; cin >> s;

  cout << (s == "heat" ? max(r, c) : s == "freeze" ? min(r, c) : s == "auto" ? c : r);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}