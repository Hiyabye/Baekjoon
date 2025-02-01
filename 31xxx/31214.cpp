#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

inline long long calc(const vector<long long> &v, long long x) {
  long long ret = 0;
  for (int i=0; i<5; i++) {
    ret += max(0LL, v[i] - x);
  }
  return ret;
}

void solve(void) {
  vector<long long> v(5);
  for (int i=0; i<5; i++) cin >> v[i];
  long long k; cin >> k;

  long long lo = 0, hi = 1e9;
  while (lo < hi) {
    long long mid = (lo + hi) / 2;
    if (calc(v, mid) <= k) hi = mid;
    else lo = mid + 1;
  }
  cout << lo;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}