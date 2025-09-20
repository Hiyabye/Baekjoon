#include <iostream>
using namespace std;

void solve(void) {
  int x, y, z; cin >> x >> y >> z;

  int sum = x + y + z * 2;
  if (sum >= 360) cout << 'A';
  else if (sum >= 320) cout << 'B';
  else if (sum >= 280) cout << 'C';
  else if (sum >= 240) cout << 'D';
  else cout << 'F';
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}