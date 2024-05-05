#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int gcd(int a, int b) {
  return b ? gcd(b, a % b) : a;
}

int calc(const vector<int> &a, int l, int r) {
  if (l == r) return a[l];

  int p = a[l];
  for (int i=l+1; i<=l+(r-l+1)/2-1; i++) p = gcd(p, a[i]);
  p += calc(a, r-(r-l)/2, r);

  int q = a[r-(r-l)/2];
  for (int i=r-(r-l)/2+1; i<=r; i++) q = gcd(q, a[i]);
  q += calc(a, l, l+(r-l+1)/2-1);

  return max(p, q);
}

void solve(void) {
  int n; cin >> n;
  vector<int> a(n);
  for (int i=0; i<n; i++) cin >> a[i];

  cout << calc(a, 0, n-1);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}