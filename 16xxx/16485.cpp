#include <iomanip>
#include <iostream>
using namespace std;

void solve(void) {
  double c, b; cin >> c >> b;

  cout << fixed << setprecision(7) << c / b;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}