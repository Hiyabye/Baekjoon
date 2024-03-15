#include <iostream>
using namespace std;

int mod(int p) {
  return (p % 86400 + 86400) % 86400;
}

void solve(void) {
  int h, m, s; cin >> h >> m >> s;
  int p = h * 3600 + m * 60 + s;

  int q; cin >> q;
  while (q--) {
    int t; cin >> t;
    if (t == 1) {
      int c; cin >> c;
      p = mod(p + c);
    } else if (t == 2) {
      int c; cin >> c;
      p = mod(p - c);
    } else {
      cout << p / 3600 << " " << p / 60 % 60 << " " << p % 60 << "\n";
    }
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}