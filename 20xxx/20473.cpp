#include <iostream>
using namespace std;

void solve(void) {
  int n; cin >> n;

  cout << (n % 3 == 2) + (n % 3 == 1) * 2 << " " << n / 3 - (n % 3 == 1);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}