#include <iostream>
#include <cmath>
using namespace std;

void solve(void) {
  int x, y;
  cin >> x >> y;

  if (x == y) {
    cout << "0\n";
    return;
  }

  int d = sqrt(y-x);
  if (y-x > d*d+d) cout << 2*d+1;
  else if (y-x > d*d) cout << 2*d;
  else cout << 2*d-1;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}