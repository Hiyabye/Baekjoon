#include <iostream>
#include <iomanip>
using namespace std;

void solve(void) {
  double a, b, c; cin >> a >> b >> c;

  cout << fixed << setprecision(7) << a * c / b;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}