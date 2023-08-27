#include <bits/stdc++.h>
using namespace std;

void solve(void) {
  int n; cin >> n;

  int a = 100, b = 100;
  while (n--) {
    int x, y; cin >> x >> y;
    if (x > y) b -= x;
    else if (x < y) a -= y;
  }
  cout << a << "\n" << b;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}