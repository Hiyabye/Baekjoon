#include <iostream>
using namespace std;

void solve(void) {
  int n, m; cin >> n >> m;

  cout << (n + m - 1) / m;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}