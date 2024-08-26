#include <algorithm>
#include <iomanip>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n, k; cin >> n >> k;
  vector<long double> v(n);
  for (int i=0; i<n; i++) cin >> v[i];
  sort(v.begin(), v.end());

  long double a = 0;
  for (int i=k; i<n-k; i++) a += v[i];
  cout << fixed << setprecision(2) << a / (n-2*k) + 1e-10 << "\n";

  for (int i=0; i<k; i++) a += v[k];
  for (int i=0; i<k; i++) a += v[n-k-1];
  cout << fixed << setprecision(2) << a / n + 1e-10;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}