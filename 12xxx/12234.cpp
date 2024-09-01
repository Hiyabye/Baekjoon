#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(int idx) {
  int n, x; cin >> n >> x;
  vector<int> s(n);
  for (int i=0; i<n; i++) cin >> s[i];
  sort(s.begin(), s.end());

  int ans = 0;
  for (int l=0, r=n-1; l<=r; r--, ans++) {
    if (l < r && s[l] + s[r] <= x) l++;
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