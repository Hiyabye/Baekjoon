#include <iostream>
#include <vector>
using namespace std;

int solve(void) {
  int n; cin >> n;
  vector<int> x(n);
  for (int i=0; i<n; i++) cin >> x[i];

  for (int i=1; i<n; i++) {
    if (x[i] == x[i-1] + 1) return -1;
  }

  int ans = 0, cur = 0;
  for (int a : x) {
    if (a <= cur) return -1;
    ans += (a - cur) / 2 + 1;
    cur = a + 1;
  }
  return ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << solve();
  return 0;
}