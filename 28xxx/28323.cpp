#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<int> a(n);
  for (int i=0; i<n; i++) cin >> a[i];

  int x = 0, y = 0;
  for (int i=0; i<n; i++) {
    if ((a[i] & 1) == (x & 1)) x++;
    if ((a[i] & 1) ^ (y & 1)) y++;
  }
  cout << max(x, y);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}