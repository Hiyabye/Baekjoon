#include <iostream>
using namespace std;

void solve(void) {
  long long a, b; cin >> a >> b;

  if (a < 3) a = 3;
  a += (a & 1);
  if (b < 3) b = 3;
  b -= (b & 1);

  long long ans = (b + a) * (b - a + 2) / 4;
  cout << (ans < 0 ? 0 : ans);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}