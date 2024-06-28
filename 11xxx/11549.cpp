#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int t; cin >> t;
  vector<int> a(5);
  for (int i=0; i<5; i++) cin >> a[i];

  int ans = 0;
  for (int i=0; i<5; i++) {
    if (a[i] == t) ans++;
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}