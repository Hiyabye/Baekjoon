#include <iostream>
using namespace std;

void solve(void) {
  int a1, b1, c1; cin >> a1 >> b1 >> c1;
  int a2, b2, c2; cin >> a2 >> b2 >> c2;
  int h1, m1, s1; cin >> h1 >> m1 >> s1;

  int t = b1 * c1 * h1 + c1 * m1 + s1;
  int h2 = t / c2 / b2;
  int m2 = t / c2 % b2;
  int s2 = t % c2;

  cout << h2 << " " << m2 << " " << s2;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}