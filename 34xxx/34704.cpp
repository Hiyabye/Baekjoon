#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<int> v(5, 0);
  while (n--) {
    int x; cin >> x;
    v[x]++;
  }

  int ans = v[4];
  if (v[3] >= v[1]) ans += v[1], v[3] -= v[1], v[1] = 0;
  else ans += v[3], v[1] -= v[3], v[3] = 0;
  ans += v[3];
  ans += v[2] / 2;
  v[2] %= 2;
  if (v[2]) {
    ans++;
    if (v[1] > 2) v[1] -= 2;
    else v[1] = 0;
  }
  ans += (v[1] + 3) / 4;

  cout << ans << '\n';
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}