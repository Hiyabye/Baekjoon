#include <algorithm>
#include <iostream>
#include <string>
#include <map>
#define MOD 1000000000
using namespace std;

map<int, int> factorize(int n) {
  map<int, int> f;
  for (int i=2; i*i<=n; i++) {
    while (!(n % i)) f[i]++, n /= i;
  }
  if (n > 1) f[n]++;
  return f;
}

map<int, int> clean(const map<int, int> &mp) {
  map<int, int> ret;
  for (auto [k, v] : mp) {
    map<int, int> f = factorize(k);
    for (auto [p, q] : f) ret[p] += q * v;
  }
  return ret;
}

string format(long long n) {
  string s = to_string(n);
  while (s.size() < 9) s = '0' + s;
  return s;
}

void solve(void) {
  int n; cin >> n;
  map<int, int> a;
  while (n--) {
    int x; cin >> x;
    a[x]++;
  }
  a = clean(a);

  int m; cin >> m;
  map<int, int> b;
  while (m--) {
    int x; cin >> x;
    b[x]++;
  }
  b = clean(b);

  long long ans = 1;
  bool big = false;
  for (auto [k, v] : a) {
    if (b.find(k) == b.end()) continue;
    int g = min(v, b[k]);
    while (g--) {
      ans *= k;
      if (ans >= MOD) ans %= MOD, big = true;
    }
  }
  cout << (big ? format(ans) : to_string(ans));
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}