#include <iostream>
#include <vector>
using namespace std;

int solve(void) {
  int n; cin >> n;
  vector<int> a(n+2);
  a[0] = -1e9, a[n+1] = 1e9;
  for (int i=1; i<=n; i++) cin >> a[i];

  int p;
  bool flag = false;
  for (int i=2; i<=n; i++) {
    if (a[i] < a[i-1]) {
      if (flag) return 0;
      flag = true;
      p = i;
    }
  }
  if (!flag) return n;

  return (a[p-1] <= a[p+1]) + (a[p-2] <= a[p]);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << solve();
  return 0;
}