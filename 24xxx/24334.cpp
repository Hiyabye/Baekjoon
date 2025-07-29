#include <algorithm>
#include <iomanip>
#include <iostream>
using namespace std;

void solve(void) {
  int n; cin >> n;

  int sum = 0;
  while (n--) {
    int h, m; cin >> h >> m;
    sum += h * 60 + m;
  }

  int ans = 1e9;
  for (int i=0; i<=sum/180+2; i++) {
    int cnt = max(0, (sum-i*240+179)/180);
    ans = min(ans, i*1090+cnt*915);
  }
  for (int i=0; i<=sum/240+2; i++) {
    int cnt = max(0, (sum-i*180+239)/240);
    ans = min(ans, i*915+cnt*1090);
  }
  cout << ans/100 << '.' << setw(2) << setfill('0') << ans % 100;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}