#include <iostream>
using namespace std;

int calc(int n, int p) {
  int a = n / p;
  return a * (a + 1) * p / 2;
}

void solve(void) {
  int n; cin >> n;

  cout << calc(n, 3) + calc(n, 7) - calc(n, 21) << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while (t--) solve();
  return 0;
}