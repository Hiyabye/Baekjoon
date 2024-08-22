#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(int idx) {
  int n; cin >> n;
  vector<int> a(n);
  for (int i=0; i<n; i++) cin >> a[i];

  int ans = 2, cur = 2;
  for (int i=2; i<n; i++) {
    cur = (a[i] - a[i-1] == a[i-1] - a[i-2]) ? cur + 1 : 2;
    ans = max(ans, cur);
  }
  cout << "Case #" << idx << ": " << ans << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  for (int i=1; i<=t; i++) solve(i);
  return 0;
}