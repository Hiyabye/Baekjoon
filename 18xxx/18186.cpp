#include <algorithm>
#include <iostream>
#include <numeric>
#include <vector>
using namespace std;

long long one(vector<long long> &a, int idx, long long x, long long p) {
  a[idx] -= x;
  return p * x;
}

long long two(vector<long long> &a, int idx, long long x, long long p) {
  a[idx] -= x; a[idx+1] -= x;
  return p * x;
}

long long three(vector<long long> &a, int idx, long long x, long long p) {
  a[idx] -= x; a[idx+1] -= x; a[idx+2] -= x;
  return p * x;
}

void solve(void) {
  int n; long long b, c; cin >> n >> b >> c;
  vector<long long> a(n+2, 0);
  for (int i=0; i<n; i++) cin >> a[i];

  if (b <= c) {
    cout << accumulate(a.begin(), a.end(), 0LL) * b;
    return;
  }

  long long ans = 0;
  for (int i=0; i<n; i++) {
    if (a[i+1] > a[i+2]) {
      ans += two(a, i, min(a[i], a[i+1] - a[i+2]), b+c);
      ans += three(a, i, min({a[i], a[i+1], a[i+2]}), b+2*c);
    } else {
      ans += three(a, i, min({a[i], a[i+1], a[i+2]}), b+2*c);
      ans += two(a, i, min(a[i], a[i+1]), b+c);
    }
    ans += one(a, i, a[i], b);
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}