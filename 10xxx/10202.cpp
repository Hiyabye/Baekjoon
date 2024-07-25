#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<char> a(n);
  for (int i=0; i<n; i++) cin >> a[i];

  int ans = 0, cnt = 0;
  for (int i=0; i<n; i++) {
    if (a[i] == 'X') cnt++;
    else cnt = 0;
    ans = max(ans, cnt);
  }
  cout << "The longest contiguous subsequence of X's is of length " << ans << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while (t--) solve();
  return 0;
}