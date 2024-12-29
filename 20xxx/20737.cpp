#include <iomanip>
#include <iostream>
using namespace std;

void solve(void) {
  double r; cin >> r;

  cout << fixed << setprecision(7) << r - 1;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}