#include <iostream>
using namespace std;

void solve(void) {
  int w, h; cin >> w >> h;
  for (int i=0; i<h; i++) {
    for (int j=0; j<w; j++) cout << "X";
    cout << "\n";
  }
  cout << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  int t; cin >> t;
  while (t--) solve();
  return 0;
}