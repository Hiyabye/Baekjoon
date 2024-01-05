#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int a, b, c; cin >> a >> b >> c;

  vector<int> v(101, 0);
  for (int i=0; i<3; i++) {
    int x, y; cin >> x >> y;
    for (int j=x; j<y; j++) v[j]++;
  }

  int ans = 0;
  for (int i=1; i<=100; i++) {
    if (v[i] == 1) ans += a;
    else if (v[i] == 2) ans += b*2;
    else if (v[i] == 3) ans += c*3;
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}