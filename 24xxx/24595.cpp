#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  string n; cin >> n;

  char c;
  bool f1 = true, f2 = true;
  for (int i=1; i<n.length(); i++) {
    if (f1) {
      if (n[i] < n[i-1]) c = n[i], f1 = false;
    } else if (f2) {
      if (n[i] > n[i-1]) n[i] = c, f2 = false;
      else c = n[i];
    } else {
      n[i] = c;
    }
  }
  cout << n << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while (t--) solve();
  return 0;
}