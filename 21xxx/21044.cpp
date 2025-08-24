#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  string s; cin >> s;

  int mx = 0, cur = 0;
  for (char c : s) {
    cur = (c == 'a' ? cur+1 : 0);
    mx = max(mx, cur);
  }
  cout << string(mx+1, 'a');
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}