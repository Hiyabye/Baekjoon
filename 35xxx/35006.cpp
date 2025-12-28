#include <iomanip>
#include <iostream>
using namespace std;

void solve(void) {
  int n, p; cin >> n >> p;

  cout << fixed << setprecision(5) << 0.055 * n * p;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}