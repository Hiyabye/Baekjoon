#include <iostream>
#include <vector>
using namespace std;

int power(int base, int exp, int mod) {
  int ret = 1;
  while (exp) {
    if (exp & 1) ret = ret * base % mod;
    base = base * base % mod;
    exp >>= 1;
  }
  return ret;
}

void solve(void) {
  int p; cin >> p;
  int n; cin >> n;

  vector<int> a(p), b(p, 0);
  for (int i=0; i<p; i++) {
    a[i] = power(i, n, p);
    b[a[i]]++;
  }

  vector<int> c(p, 0);
  for (int i=0; i<p; i++) c[(a[i] + a[i]) % p]++;
  for (int i=0; i<p-1; i++) for (int j=i+1; j<p; j++) c[(a[i] + a[j]) % p] += 2;

  int ans = 0;
  for (int i=0; i<p; i++) ans += b[i] * c[i];
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}