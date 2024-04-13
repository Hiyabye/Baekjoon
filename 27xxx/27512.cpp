#include <iostream>
using namespace std;

void solve(void) {
  int n, m; cin >> n >> m;

  cout << n * m - (n & 1 && m & 1);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}