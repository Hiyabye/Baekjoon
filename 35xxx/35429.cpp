#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  int n; cin >> n;
  string s; cin >> s;

  int g = 0, ss = 0, h = 0;
  for (char c : s) {
    if (c == 'G') g++;
    else if (c == 'S') ss++;
    else if (c == 'H') h++;
  }
  cout << min({g, ss / 2, h});
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}