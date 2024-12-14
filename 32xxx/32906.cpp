#include <algorithm>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <utility>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<pair<int, int>> a, b;
  while (n--) {
    int x, y; cin >> x >> y;
    if (y == 0) a.push_back({x, y});
    else b.push_back({x, y});
  }

  double ans = 0;
  for (int i=0; i<(int)a.size()-1; i++) for (int j=i+1; j<a.size(); j++) for (int k=0; k<b.size(); k++) {
    double x1 = a[i].first, y1 = a[i].second;
    double x2 = a[j].first, y2 = a[j].second;
    double x3 = b[k].first, y3 = b[k].second;
    ans = max(ans, abs((x2-x1)*(y3-y1) - (x3-x1)*(y2-y1)) / 2);
  }
  cout << fixed << setprecision(10) << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}