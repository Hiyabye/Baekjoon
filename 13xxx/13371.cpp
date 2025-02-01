#include <iostream>
using namespace std;

void solve(void) {
  int n; cin >> n;
  if (n == 1 || n == 2) {
    cout << "1 " << (n == 1 ? "dolphin" : "jump") << "\n";
    return;
  }

  int d = 1;
  while (n > d * 3) n -= d++ * 3;

  if (n <= d) cout << d << " dolphins";
  else if (n <= d * 2) cout << d << " jumps";
  else cout << "splash";
  cout << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while (t--) solve();
  return 0;
}