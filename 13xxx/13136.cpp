#include <iostream>
using namespace std;

void solve(void) {
  long long r, c, n; cin >> r >> c >> n;

  cout << ((r+n-1)/n) * ((c+n-1)/n);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}