#include <cmath>
#include <iostream>
using namespace std;

void solve(void) {
  int a1, p1; cin >> a1 >> p1;
  int r1, p2; cin >> r1 >> p2;

  cout << (a1 * p2 > acos(-1) * r1 * r1 * p1 ? "Slice of pizza" : "Whole pizza") << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n; cin >> n;
  while (n--) solve();
  return 0;
}