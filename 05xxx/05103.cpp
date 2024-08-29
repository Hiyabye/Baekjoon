#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

bool solve(void) {
  string c; cin >> c;
  if (c == "#") return false;
  int m, s; cin >> m >> s;

  int t; cin >> t;
  while (t--) {
    char a; int b; cin >> a >> b;
    if (a == 'S') {
      s = max(0, s - b);
    } else if (a == 'R') {
      s = min(m, s + b);
    }
  }
  cout << c << " " << s << "\n";

  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  while (solve());
  return 0;
}