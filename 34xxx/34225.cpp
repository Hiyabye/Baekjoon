#include <algorithm>
#include <iostream>
#include <utility>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<pair<long long, long long>> a(n);
  for (int i=0; i<n; i++) cin >> a[i].first, a[i].second = i+1;

  sort(a.begin(), a.end(), greater<pair<long long, long long>>());
  for (int i=1; i<n; i++) a[i].first += a[i-1].first;

  int ans = 1;
  long long mx = a[0].first * 3;
  for (int i=1; i<n; i++) {
    if (a[i].first-a[i-1].first+a[0].first+a[i].first > mx) {
      ans = i+1;
      mx = a[i].first-a[i-1].first+a[0].first+a[i].first;
    }
  }
  cout << ans << "\n";
  for (int i=0; i<ans; i++) cout << a[i].second << " ";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}