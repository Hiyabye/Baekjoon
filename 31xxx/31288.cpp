#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  int n; string p; cin >> n >> p;
  if (n == 1) {
    cout << "4 2\n";
    return;
  }

  int key = 0;
  for (char c : p) key += c - '0';
  key %= 3;

  for (int i=0; i<n; i++) {
    int x = p[i] - '0';
    int y = (x - key) % 3 + 3;
    if (y == x) y += 3;
    cout << p.substr(0, i) << y << (i+1 < n ? p.substr(i+1) : "") << " 3\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while (t--) solve();
  return 0;
}