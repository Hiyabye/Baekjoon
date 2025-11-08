#include <iostream>
using namespace std;

void solve(void) {
  int p3, p4, p0; cin >> p3 >> p4 >> p0;

  int t3 = -1, t4 = -1;
  for (int i=0; i<=(p4+p0)/4; i++) {
    if (4*i < p4 || 4*i > p4+p0) continue;
    int x = p3 + p4 + p0 - 4*i;
    if (x % 3 != 0) continue;
    t3 = x / 3; t4 = i;
  }

  if (t3 == -1) cout << -1;
  else cout << t3 << " " << t4;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}