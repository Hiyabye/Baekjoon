#include <iostream>
using namespace std;

void solve(void) {
  int idx = -1;
  double mx = 0;

  for (int i=0; i<3; i++) {
    double a, b; cin >> a >> b;
    a *= 10; b *= 10;
    if (a >= 5000) a -= 500;
    if (b / a > mx) idx = i, mx = b / a;
  }
  cout << "SNU"[idx];
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}