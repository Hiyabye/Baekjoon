#include <cmath>
#include <iomanip>
#include <iostream>
using namespace std;

void solve(void) {
  long long a; cin >> a;

  cout << fixed << setprecision(7) << sqrt((double)a * 24 / sqrt(3));
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}