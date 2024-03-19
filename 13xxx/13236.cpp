#include <iostream>
using namespace std;

void solve(void) {
  int n; cin >> n;

  cout << n << " ";
  while (n != 1) {
    n = (n & 1) ? 3 * n + 1 : n >> 1;
    cout << n << " ";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}