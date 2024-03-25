#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  int n; cin >> n;
  string a; cin >> a;
  string b; cin >> b;

  int ans = 0;
  for (int i=0; i<n; i++) {
    if (a[i] != b[i]) ans++;
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}