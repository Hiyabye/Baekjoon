#include <iostream>
using namespace std;

void solve(void) {
  int a, b, c, d, e; cin >> a >> b >> c >> d >> e;

  cout << (a*a + b*b + c*c + d*d + e*e) % 10;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}