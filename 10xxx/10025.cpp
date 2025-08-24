#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n, k; cin >> n >> k;
  vector<int> p(1000001, 0);
  while (n--) {
    int g, x; cin >> g >> x;
    p[x] = g;
  }

  long long cur = 0;
  for (int i=0; i<=1000000 && i<=2*k; i++) {
    cur += p[i];
  }

  long long ans = cur;
  for (int i=2*k+1; i<=1000000; i++) {
    cur += p[i] - p[i-2*k-1];
    ans = max(ans, cur);
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}