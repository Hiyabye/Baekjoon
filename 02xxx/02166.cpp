#include <iostream>
#include <vector>
#include <utility>
#include <cmath>
using namespace std;

void solve(void) {
  long long n, x, y;
  cin >> n;
  vector<pair<long long, long long> > a(n);
  for (long long i=0; i<n; i++) {
    cin >> x >> y;
    a[i] = make_pair(x, y);
  }

  long long ans = 0;
  for (long long i=1; i<n-1; i++) {
    ans += (a[0].first*a[i].second + a[i].first*a[i+1].second + a[i+1].first*a[0].second);
    ans -= (a[0].second*a[i].first + a[i].second*a[i+1].first + a[i+1].second*a[0].first);
  }
  ans = abs(ans);
  if (ans % 2 == 1) cout << ans/2 << ".5\n";
  else              cout << ans/2 << ".0\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}