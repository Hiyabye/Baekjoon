#include <iostream>
using namespace std;

bool check(int h, int m, int n) {
  return h % 10 == n || h / 10 == n || m % 10 == n || m / 10 == n;
}

void next(int &h, int &m) {
  m++;
  h += m / 60;
  m %= 60;
}

void solve(void) {
  int h1, m1; cin >> h1 >> m1;
  int h2, m2; cin >> h2 >> m2;
  int n; cin >> n;

  int ans = check(h2, m2, n);
  while (h1 != h2 || m1 != m2) {
    if (check(h1, m1, n)) ans++;
    next(h1, m1);
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}