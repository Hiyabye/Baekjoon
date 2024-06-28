#include <iostream>
#include <algorithm>
using namespace std;

void solve(void) {
  vector<int> a(3), b(3);
  for (int i=0; i<3; i++) cin >> a[i];
  for (int i=0; i<3; i++) cin >> b[i];
  sort(a.begin(), a.end());
  sort(b.begin(), b.end());

  bool ans = true;
  for (int i=0; i<3; i++) {
    if (a[i] != b[i]) ans = false;
  }
  cout << (ans && a[2]*a[2] == a[0]*a[0] + a[1]*a[1] ? "YES" : "NO");
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}