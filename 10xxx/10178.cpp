#include <iostream>
using namespace std;

void solve(void) {
  int c, v;
  cin >> c >> v;
  cout << "You get " << c/v << " piece(s) and your dad gets " << c%v << " piece(s).\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}