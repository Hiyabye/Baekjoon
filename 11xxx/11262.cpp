#include <iomanip>
#include <iostream>
#include <numeric>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<double> v(n);
  for (int i=0; i<n; i++) cin >> v[i];

  double avg = accumulate(v.begin(), v.end(), 0.0) / n, cnt = 0;
  for (int i=0; i<n; i++) {
    if (v[i] > avg) cnt++;
  }
  cout << fixed << setprecision(3) << avg + 1e-9 << " " << cnt / n * 100 + 1e-9 << "%\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while (t--) solve();
  return 0;
}