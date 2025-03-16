#include <algorithm>
#include <cmath>
#include <iostream>
#include <vector>
using namespace std;

inline long long calc(int n, const vector<long long> &v) {
  long long ret = 0;
  for (int i=1; i<n; i++) ret += abs(v[i] - v[i-1]);
  return ret;
}

void solve(void) {
  int n; cin >> n;
  vector<long long> a(n);
  for (int i=0; i<n; i++) cin >> a[i];
  sort(a.begin(), a.end());

  vector<long long> b(n, 0), c(n, 0);
  if (n & 1) {
    b[0] = a[(n-1)/2-1], b[n-1] = a[(n-1)/2];
    c[0] = a[(n-1)/2], c[n-1] = a[(n-1)/2+1];
    for (int i=1; i<n-1; i++) {
      b[i] = (i & 1) ? a[(n-1)/2+i/2+1] : a[i/2-1];
      c[i] = (i & 1) ? a[i/2] : a[(n-1)/2+i/2+1];
    }
  } else {
    b[0] = a[n/2-1], b[n-1] = a[n/2];
    for (int i=1; i<n-1; i++) {
      b[i] = (i & 1) ? a[n/2+i/2+1] : a[i/2-1];
    }
  }
  cout << max(calc(n, b), calc(n, c));
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}