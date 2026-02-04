#include <iostream>
#include <utility>
#include <vector>
using namespace std;

void solve(void) {
  int n, a, b, c, d, e, f, g, h;
  cin >> n >> a >> b >> c >> d >> e >> f >> g >> h;

  vector<pair<int, int>> ans;
  for (int i=0; i<=n; i++) for (int j=0; i+j<=n; j++) {
    if (a*i + b*j + c*(n-i-j) == d && e*i + f*j + g*(n-i-j) == h) ans.emplace_back(i, j);
    if (ans.size() > 1) break;
  }

  if (ans.size() == 1) {
    int x = ans[0].first, y = ans[0].second;
    cout << "0\n" << x << " " << y << " " << n-x-y;
  } else if (ans.size() > 1) {
    cout << "1";
  } else {
    cout << "2";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}