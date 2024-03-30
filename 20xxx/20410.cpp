#include <iostream>
using namespace std;

int calc(int a, int x, int c, int m) {
  return (a * x + c) % m;
}

void solve(void) {
  int m, s, x1, x2; cin >> m >> s >> x1 >> x2;

  for (int a=0; a<m; a++) {
    for (int c=0; c<m; c++) {
      if (x1 != calc(a, s, c, m)) continue;
      if (x2 != calc(a, x1, c, m)) continue;
      cout << a << " " << c;
      return;
    }
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}