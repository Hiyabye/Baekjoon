#include <cmath>
#include <iomanip>
#include <iostream>
using namespace std;

void solve(void) {
  long long a; cin >> a;

  cout << fixed << setprecision(7) << 2 * sqrt(a) * sqrt(acos(-1));
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}