#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<int> a(n);
  for (int i=0; i<n; i++) cin >> a[i];

  int ans = 1;
  for (int i=0; i<n-1; i++) {
    int cur = 1;
    for (int j=i+1; j<n; j++) {
      if (a[j] >= a[j-1]) cur++;
      else break;
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