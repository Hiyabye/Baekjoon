#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(int idx) {
  int n; cin >> n;
  vector<int> s(n);
  for (int i=0; i<n; i++) cin >> s[i];
  sort(s.begin(), s.end());

  int ans = 0;
  for (int i=0; i<n; i++) {
    if (ans + 1 <= s[i]) ans++;
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