#include <iostream>
using namespace std;

void solve(void) {
  int x, y; cin >> x >> y;
  int n; cin >> n;

  while (n--) {
    int a, b; cin >> a >> b;
    cout << (a != x && b != y) << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}