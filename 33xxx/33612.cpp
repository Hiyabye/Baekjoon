#include <iostream>
using namespace std;

void solve(void) {
  int n; cin >> n;

  int y = 2024, m = 7;
  m += (n - 1) * 7;

  cout << y + m / 12 << " " << m % 12 + 1;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}