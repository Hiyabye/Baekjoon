#include <iostream>
#include <utility>
#include <vector>
using namespace std;

long long gcd(long long a, long long b) {
  return b ? gcd(b, a % b) : a;
}

void solve(void) {
  int n; cin >> n;
  vector<long long> a(n);
  for (int i=0; i<n; i++) cin >> a[i];

  pair<long long, long long> ans = {1, a[n-1]};
  for (int i=n-2; i>=0; i--) {
    ans = {ans.second, ans.first + ans.second * a[i]};
  }

  long long g = gcd(ans.second - ans.first, ans.second);
  cout << (ans.second - ans.first) / g << " " << ans.second / g;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}