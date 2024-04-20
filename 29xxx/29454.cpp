#include <iostream>
#include <numeric>
#include <vector>
using namespace std;

int solve(void) {
  int n; cin >> n;
  vector<int> a(n+1, 0);
  for (int i=1; i<=n; i++) cin >> a[i];
  
  int sum = accumulate(a.begin(), a.end(), 0);
  for (int i=1; i<=n; i++) {
    if (sum == 2 * a[i]) return i;
  }
  return -1;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << solve();
  return 0;
}