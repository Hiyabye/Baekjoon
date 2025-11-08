#include <iostream>
using namespace std;

void solve(void) {
  long long h1, h2, h3; cin >> h1 >> h2 >> h3;
  long long n; cin >> n;

  cout << (h2 + h3 * 2) * (n / 2) + (n & 1 ? h1 + h2 + h3 : 0);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}