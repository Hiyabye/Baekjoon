#include <iomanip>
#include <iostream>
using namespace std;

void solve(void) {
  double n, d; cin >> n >> d;

  cout << fixed << setprecision(1) << n / 2 - d;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}