#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  vector<int> a(15);
  for (int i=0; i<15; i++) cin >> a[i];

  int ans = a[14];
  for (int i=0; i<14; i++) {
    ans = max(ans, a[i]+1);
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}