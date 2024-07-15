#include <algorithm>
#include <cmath>
#include <iostream>
#include <vector>
using namespace std;

long long solve(void) {
  long long n, d; cin >> n >> d;
  vector<long long> x(n);
  for (int i=0; i<n; i++) cin >> x[i];

  long long a = *min_element(x.begin(), x.end());
  long long b = *max_element(x.begin(), x.end());

  if (a >= 0) return 2 * llabs(b) + d;
  if (b <= 0) return 2 * llabs(a) + d;

  long long l = llabs(a), r = llabs(b);
  return min({2*l+2*r+2*d, 2*l+4*r+d, 4*l+2*r+d, max(4*l+4*r, 2*l+2*r+d)});
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << solve();
  return 0;
}