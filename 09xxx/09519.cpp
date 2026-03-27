#include <iostream>
#include <string>
#include <vector>
using namespace std;

inline vector<int> calc(int n, const vector<int> &p, const vector<int> &q) {
  vector<int> r(n);
  for (int i=0; i<n; i++) r[i] = q[p[i]];
  return r;
}

void solve(void) {
  int x; cin >> x;
  string s; cin >> s;

  int n = s.length();
  vector<int> p(n);
  for (int i=0; i<n/2; i++) {
    p[i] = 2*i;
    p[n-i-1] = 2*i+1;
  }
  if (n & 1) p[n/2] = n-1;

  vector<int> q(n);
  for (int i=0; i<n; i++) q[i] = i;
  while (x > 0) {
    if (x & 1) q = calc(n, p, q);
    p = calc(n, p, p);
    x >>= 1;
  }

  for (int i=0; i<n; i++) cout << s[q[i]];
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}