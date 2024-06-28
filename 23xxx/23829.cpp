#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

void solve(void) {
  long long n, q, x;
  cin >> n >> q;
  vector<int> p(n);
  for (int i=0; i<n; i++) cin >> p[i];
  sort(p.begin(), p.end());

  vector<long long> sum(n);
  sum[0] = p[0];
  for (int i=1; i<n; i++) sum[i] = sum[i-1] + p[i];

  for (int i=0; i<q; i++) {
    cin >> x;
    long long idx = lower_bound(p.begin(), p.end(), x) - p.begin();

    if (idx == 0 || idx == n) cout << llabs(sum[n-1] - n*x) << "\n";
    else cout << (sum[n-1]-n*x) - (sum[idx-1]-idx*x)*2 << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}