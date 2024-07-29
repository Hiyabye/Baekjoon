#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  vector<int> a(5), b(5);
  for (int i=0; i<5; i++) cin >> a[i];
  for (int i=0; i<5; i++) cin >> b[i];

  sort(a.begin(), a.end());
  sort(b.begin(), b.end());

  int ans = 0;
  for (int i=0; i<5; i++) {
    if (a[i] > b[i]) ans++;
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}