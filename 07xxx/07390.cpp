#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int m, n, k; cin >> m >> n >> k;
  vector<double> v(k+1, 0);
  for (int i=1; i<=k; i++) cin >> v[i];
  for (int i=1; i<=k; i++) v[i] += v[i-1];

  bool flag = (v[n] - v[n-m]) / m > (v[n] - v[0]) / n;
  cout << (flag ? "BUY" : "SELL") << " ON DAY " << n << "\n";
  for (int i=n+1; i<=k; i++) {
    if ((v[i] - v[i-m]) / m > (v[i] - v[i-n]) / n == flag) continue;
    flag = (v[i] - v[i-m]) / m > (v[i] - v[i-n]) / n;
    cout << (flag ? "BUY" : "SELL") << " ON DAY " << i << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}