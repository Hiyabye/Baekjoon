#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

long long solve(void) {
  int n; cin >> n;
  vector<long long> t(n);
  for (int i=0; i<n; i++) cin >> t[i];
  sort(t.begin(), t.end());

  if (n & 1) {
    long long ans = t.back();
    for (int i=0; i<(n-1)/2; i++) {
      ans = max(ans, t[i] + t[n-i-2]);
    }
    return ans;
  } else {
    long long ans = 0;
    for (int i=0; i<n/2; i++) {
      ans = max(ans, t[i] + t[n-i-1]);
    }
    return ans;
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << solve();
  return 0;
}