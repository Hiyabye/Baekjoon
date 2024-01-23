#include <iomanip>
#include <iostream>
using namespace std;

bool solve(void) {
  double n; cin >> n;
  if (n == 0) return false;

  cout << fixed << setprecision(2) << 1+n+n*n+n*n*n+n*n*n*n << "\n";
  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  while (solve());
  return 0;
}