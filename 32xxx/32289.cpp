#include <iostream>
using namespace std;

void solve(void) {
  long long n, m; cin >> n >> m;

  cout << 4*n*m - 3*n - 3*m + 2;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}