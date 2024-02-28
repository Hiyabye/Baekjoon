#include <iostream>
using namespace std;

int avg(int x) {
  return (x + 5) / 10;
}

void solve(void) {
  int r = 0, g = 0, b = 0;

  for (int i=0; i<10; i++) {
    int _r, _g, _b; cin >> _r >> _g >> _b;
    r += _r; g += _g; b += _b;
  }
  cout << avg(r) << " " << avg(g) << " " << avg(b) << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int z; cin >> z;
  while (z--) solve();
  return 0;
}