#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<int> l(n);
  for (int i=0; i<n; i++) cin >> l[i];
  sort(l.begin(), l.end(), greater<int>());

  int ans = 0;
  for (int i=1; i<n; i++) {
    ans += l[0] + l[i];
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}