#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  int k; string n; cin >> k >> n;

  for (char c : n) {
    cout << (c - '0' + k) % 10;
  }
  cout << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while (t--) solve();
  return 0;
}