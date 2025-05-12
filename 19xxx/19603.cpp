#include <iostream>
using namespace std;

void solve(void) {
  int p; cin >> p;
  int n; cin >> n;
  int r; cin >> r;

  int ans = 0, cnt = n, day = n;
  while (cnt <= p) {
    ans++;
    day *= r;
    cnt += day;
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}