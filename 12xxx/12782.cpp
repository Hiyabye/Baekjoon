#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  string n, m; cin >> n >> m;

  int a = 0, b = 0;
  for (int i=0; i<n.length(); i++) {
    if (n[i] == '0' && m[i] == '1') a++;
    if (n[i] == '1' && m[i] == '0') b++;
  }
  cout << max(a, b) << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while (t--) solve();
  return 0;
}