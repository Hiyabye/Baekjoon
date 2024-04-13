#include <iostream>
using namespace std;

void solve(void) {
  int n; cin >> n;

  int a = 0, b = 0;
  while (n--) {
    int e, v1, v2; cin >> e >> v1 >> v2;
    a += v1 - v2;
    b += e * (v1 > v2 ? 1 : -1);
  }
  cout << (a > 0 && b > 0 ? 1 : a < 0 && b < 0 ? 2 : 0);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}