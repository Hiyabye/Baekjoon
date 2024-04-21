#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int d, c, r; cin >> d >> c >> r;
  vector<int> a(c);
  for (int i=0; i<c; i++) cin >> a[i];

  int cur = d;
  for (int i=0; i<r; i++) {
    int x; cin >> x;
    cur += x;
  }

  int ans = r;
  for (int x : a) {
    if (x > cur) break;
    cur -= x;
    ans++;
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}