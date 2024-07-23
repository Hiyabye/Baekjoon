#include <algorithm>
#include <iostream>
using namespace std;

inline int calc(int x, int y, int op) {
  switch (op) {
    case 0: return x + y;
    case 1: return x - y;
    case 2: return x * y;
    case 3: return x / y;
  }
}

void solve(void) {
  int a, b, c; cin >> a >> b >> c;

  int ans = 1e9;
  for (int i=0; i<4; i++) {
    if (i == 3 && a % b) continue;
    for (int j=0; j<4; j++) {
      int d = calc(a, b, i);
      if (j == 3 && d % c) continue;
      if (calc(d, c, j) < 0) continue;
      ans = min(ans, calc(d, c, j));
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