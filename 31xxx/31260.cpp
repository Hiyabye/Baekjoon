#include <iostream>
using namespace std;

void solve(void) {
  long long x, y; cin >> x >> y;
  long long d; cin >> d;

  long long a = (100 * x + y + 2 * d) / 4;
  long long b = (100 * x + y - 2 * d) / 4;

  cout << a / 100 << " " << a % 100 << "\n" << b / 100 << " " << b % 100;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}