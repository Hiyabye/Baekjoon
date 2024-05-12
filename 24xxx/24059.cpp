#include <iostream>
#include <vector>
using namespace std;

long long power(long long base, long long exp, long long mod) {
  long long ret = 1;
  while (exp) {
    if (exp & 1) ret = ret * base % mod;
    base = base * base % mod;
    exp >>= 1;
  }
  return ret;
}

void solve(void) {
  int n; cin >> n;
  vector<long long> a(n+1);
  for (int i=0; i<=n; i++) cin >> a[i];
  long long m; cin >> m;

  switch (n) {
    case 0: cout << a[0] % m; break;
    case 1: cout << power(a[1], a[0], m); break;
    case 2: cout << power(a[2], power(a[1], a[0], m-1) + m-1, m); break;
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}