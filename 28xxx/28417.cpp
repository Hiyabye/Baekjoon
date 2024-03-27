#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;

  int ans = 0;
  while (n--) {
    vector<int> a(2), b(5);
    for (int i=0; i<2; i++) cin >> a[i];
    for (int i=0; i<5; i++) cin >> b[i];
    sort(b.begin(), b.end(), greater<int>());
    ans = max(ans, max(a[0], a[1]) + b[0] + b[1]);
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}