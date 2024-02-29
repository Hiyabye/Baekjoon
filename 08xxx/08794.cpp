#include <iostream>
using namespace std;

void solve(void) {
  int n, m, l; cin >> n >> m >> l;

  cout << (l == 1 ? n+m-1 : n+l-2) / m << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int z; cin >> z;
  while (z--) solve();
  return 0;
}