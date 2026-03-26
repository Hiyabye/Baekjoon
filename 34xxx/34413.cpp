#include <iostream>
using namespace std;

void solve(void) {
  int x, y, z; char c; cin >> x >> c >> y >> c >> z;

  int sum = (x + z) + (x * y + z);
  cout << sum / 2 << (sum & 1 ? ".5" : "");
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}