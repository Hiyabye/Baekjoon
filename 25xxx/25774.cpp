#include <iostream>
using namespace std;

void solve(void) {
  int d1, m1, y1, n; cin >> d1 >> m1 >> y1 >> n;
  int d2, m2, y2; cin >> d2 >> m2 >> y2;

  cout << (d2-d1 + (m2-m1)*30 + (y2-y1)*360 + n-1) % 7 + 1;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}