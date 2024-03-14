#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int w, h; cin >> w >> h;
  int n; cin >> n;

  vector<int> a = {0, h}, b = {0, w};
  while (n--) {
    int x, y; cin >> x >> y;
    if (x == 0) a.push_back(y);
    else b.push_back(y);
  }
  sort(a.begin(), a.end());
  sort(b.begin(), b.end());

  int c = 0, d = 0;
  for (int i=1; i<b.size(); i++) d = max(d, b[i] - b[i-1]);
  for (int i=1; i<a.size(); i++) c = max(c, a[i] - a[i-1]);
  cout << d * c;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}