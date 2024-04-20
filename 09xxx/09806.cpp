#include <iostream>
#include <vector>
using namespace std;

int power(int base, int exp) {
  int ret = 1;
  while (exp--) ret *= base;
  return ret;
}

void solve(void) {
  int n; cin >> n;
  int e; cin >> e;
  vector<int> v(n);
  for (int i=0; i<n; i++) cin >> v[i];

  int ans = 0;
  for (int i=0; i<n; i++) {
    int tmp = power(v[i], e);
    if (tmp > 0) ans += tmp;
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}