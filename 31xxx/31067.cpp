#include <iostream>
#include <vector>
using namespace std;

int solve(void) {
  int n, k; cin >> n >> k;
  vector<int> a(n);
  for (int i=0; i<n; i++) cin >> a[i];

  int ans = 0;
  for (int i=1; i<n; i++) {
    if (a[i] > a[i-1]) continue;
    else if (a[i] + k > a[i-1]) {
      a[i] += k;
      ans++;
    } else return -1;
  }
  return ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << solve();
  return 0;
}