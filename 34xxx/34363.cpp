#include <iostream>
using namespace std;

bool solve(void) {
  double s; cin >> s;
  double d; cin >> d;
  double t; cin >> t;

  return s * 22 * t >= d * 15;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << (solve() ? "MADE IT" : "FAILED TEST");
  return 0;
}