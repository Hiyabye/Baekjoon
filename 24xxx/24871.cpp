#include <iostream>
using namespace std;

void solve(void) {
  long long d, m, w; cin >> d >> m >> w;
  long long i, j, k; cin >> i >> j >> k;

  i--; j--; k--;

  cout << (char)('a' + (d*m*k + d*j + i) % w);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}