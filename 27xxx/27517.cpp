#include <algorithm>
#include <iostream>
#include <vector>
#define MOD 1000000007
using namespace std;

inline long long modsub(long long a, long long b) {
  return (a - b + MOD) % MOD;
}

void solve(void) {
  int n; cin >> n;
  vector<long long> a(n), b(n);
  for (int i=0; i<n; i++) cin >> a[i], b[i] = a[i];
  sort(b.begin(), b.end());

  long long ans = 0;
  for (int i=0; i<n; i++) {
    long long h = n - i - 1;
    ans = (ans + modsub(a[i], b[i]) * h) % MOD;
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}