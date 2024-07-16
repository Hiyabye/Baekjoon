#include <cmath>
#include <iomanip>
#include <iostream>
using namespace std;

long double invFact(int n) {
  long double ret = 1.0;
  for (int i=1; i<=n; i++) ret /= i;
  return ret;
}

void solve(void) {
  int n; cin >> n;

  long double ans = 0.0;
  for (int i=0; i<=n; i++) ans += invFact(i);
  cout << fixed << setprecision(13) << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}