#include <cmath>
#include <iostream>
#include <vector>
using namespace std;

int calc(double d) {
  if (d <= 3) return 100;
  if (d <= 6) return 80;
  if (d <= 9) return 60;
  if (d <= 12) return 40;
  if (d <= 15) return 20;
  return 0;
}

void solve(void) {
  vector<int> v(6);
  for (int i=0; i<6; i++) {
    double x, y; cin >> x >> y;
    v[i] = calc(hypot(x, y));
  }

  int a = v[0] + v[1] + v[2];
  int b = v[3] + v[4] + v[5];

  cout << "SCORE: " << a << " to " << b << ", ";
  cout << (a > b ? "PLAYER 1 WINS." : a < b ? "PLAYER 2 WINS." : "TIE.") << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while (t--) solve();
  return 0;
}