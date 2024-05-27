#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

inline long long calc(long long a, long long b, long long c, long long d) {
  return abs((a + b) - (c + d));
}

void solve(void) {
  int n; cin >> n;
  vector<long long> h(n);
  for (int i=0; i<n; i++) cin >> h[i];
  sort(h.begin(), h.end());

  long long ans = 1e18;
  for (int i=0; i<n-1; i++) for (int j=i+1; j<n; j++) {
    int lo = 0, hi = n-1;
    while (lo < hi) {
      while (lo == i || lo == j) lo++;
      while (hi == i || hi == j) hi--;
      if (lo >= hi) break;
      ans = min(ans, calc(h[i], h[j], h[lo], h[hi]));
      if (h[i] + h[j] > h[lo] + h[hi]) lo++;
      else hi--;
    }
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}