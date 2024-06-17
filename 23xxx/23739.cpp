#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<int> t(n);
  for (int i=0; i<n; i++) cin >> t[i];

  int ans = 0, cur = 30;
  for (int i=0; i<n; i++) {
    if (cur > t[i]) {
      cur -= t[i];
      ans++;
    } else if (cur * 2 >= t[i]) {
      cur = 30;
      ans++;
    } else {
      cur = 30;
    }
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}