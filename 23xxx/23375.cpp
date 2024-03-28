#include <iostream>
using namespace std;

void solve(void) {
  int x, y; cin >> x >> y;
  int r; cin >> r;

  cout << x + r << " " << y + r << "\n";
  cout << x - r << " " << y + r << "\n";
  cout << x - r << " " << y - r << "\n";
  cout << x + r << " " << y - r;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}