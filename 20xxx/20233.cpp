#include <iostream>
using namespace std;

void solve(void) {
  int a; cin >> a;
  int x; cin >> x;
  int b; cin >> b;
  int y; cin >> y;
  int t; cin >> t;

  cout << a + (t <= 30 ? 0 : 21 * (t-30) * x) << " ";
  cout << b + (t <= 45 ? 0 : 21 * (t-45) * y);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}