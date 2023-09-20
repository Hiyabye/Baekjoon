#include <iostream>
using namespace std;

void solve(void) {
  int s; cin >> s;
  int m; cin >> m;
  int l; cin >> l;

  cout << (s+2*m+3*l >= 10 ? "happy" : "sad");
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}