#include <iostream>
using namespace std;

void solve(void) {
  int n; cin >> n;

  cout << 2*n*n*n + 30*n*n + 38*n;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}