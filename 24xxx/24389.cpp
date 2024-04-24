#include <iostream>
using namespace std;

void solve(void) {
  int n; cin >> n;

  cout << __builtin_popcount(n ^ -n);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}