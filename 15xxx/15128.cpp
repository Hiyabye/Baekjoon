#include <iostream>
using namespace std;

void solve(void) {
  long long p1, q1, p2, q2; cin >> p1 >> q1 >> p2 >> q2;

  cout << ((p1 * p2) % (q1 * q2 * 2) == 0);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}