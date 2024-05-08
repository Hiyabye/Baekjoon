#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<int> s(n), t(n), b(n);
  for (int i=0; i<n; i++) cin >> s[i] >> t[i] >> b[i];

  vector<int> ans(1001, 0);
  for (int i=0; i<n; i++) {
    for (int j=s[i]; j<t[i]; j++) {
      ans[j] += b[i];
    }
  }
  cout << *max_element(ans.begin(), ans.end());
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}