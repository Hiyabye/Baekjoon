#include <iostream>
using namespace std;

void solve(void) {
  int n; cin >> n;

  while (!(n & 1)) n >>= 1;
  cout << (n == 1) << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}