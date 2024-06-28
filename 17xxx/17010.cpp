#include <iostream>
using namespace std;

void solve(void) {
  int l; cin >> l;

  while (l--) {
    int n; char c; cin >> n >> c;
    while (n--) cout << c;
    cout << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}