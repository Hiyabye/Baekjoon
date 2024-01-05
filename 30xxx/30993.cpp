#include <iostream>
using namespace std;

long long fac(int n) {
  long long ret = 1;
  for (int i=2; i<=n; i++) ret *= i;
  return ret;
}

void solve(void) {
  int n, a, b, c; cin >> n >> a >> b >> c;

  cout << fac(n) / (fac(a) * fac(b) * fac(c));
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}