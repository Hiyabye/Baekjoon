#include <iostream>
using namespace std;

void solve(void) {
  int n; cin >> n;

  if (n == 1) {
    cout << 0;
  } else if (n & 1) {
    cout << 1;
    for (int i=0; i<n-2; i++) cout << 2;
    cout << 1;
  } else {
    for (int i=0; i<n; i++) cout << 1;
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