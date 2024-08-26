#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<int> a, b, c;
  while (n--) {
    int x; cin >> x;
    if (x > 0) a.push_back(x);
    else if (x < 0) b.push_back(x);
    else c.push_back(x);
  }
  sort(a.begin(), a.end(), greater<int>());
  sort(b.begin(), b.end());

  int ans = 0;
  for (int i=1; i<a.size(); i+=2) {
    if (a[i-1] == 1 || a[i] == 1) ans += a[i-1] + a[i];
    else ans += a[i-1] * a[i];
  }
  if (a.size() & 1) ans += a.back();
  for (int i=1; i<b.size(); i+=2) ans += b[i-1] * b[i];
  if (b.size() & 1 && c.empty()) ans += b.back();
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}