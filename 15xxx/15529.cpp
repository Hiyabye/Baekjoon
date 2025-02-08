#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<int> a(n);
  for (int i=0; i<n; i++) cin >> a[i];

  int ans = -1;
  for (int i=0; i<n-1; i++) for (int j=i+1; j<n; j++) {
    if (string("123456789").find(to_string(a[i] * a[j])) == string::npos) continue;
    ans = max(ans, a[i] * a[j]);
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}