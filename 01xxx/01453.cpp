#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;

  int ans = 0;
  vector<bool> v(101, true);
  while (n--) {
    int x; cin >> x;
    if (v[x]) v[x] = false;
    else ans++;
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}