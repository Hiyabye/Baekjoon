#include <algorithm>
#include <iostream>
#include <utility>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<pair<int, long long>> v(n);
  for (int i=0; i<n; i++) {
    cin >> v[i].first, v[i].second = 0;
    for (int j=0; j<v[i].first; j++) {
      long long x; cin >> x;
      v[i].second = max(v[i].second, x);
    }
  }

  long long mx = 0;
  for (int i=0; i<n; i++) {
    mx = max(mx, v[i].second);
  }

  long long ans = 0;
  for (int i=0; i<n; i++) {
    ans += v[i].first * (mx - v[i].second);
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}