#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<int> a(n);
  for (int i=0; i<n; i++) cin >> a[i];

  int ans = 2;
  for (int i=0; i<n-2; i++) {
    int cur = 2;
    for (int j=i+1; j<n-1; j++) {
      if (a[j-1] <= a[j] && a[j] <= a[j+1]) break;
      if (a[j-1] >= a[j] && a[j] >= a[j+1]) break;
      cur++;
    }
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