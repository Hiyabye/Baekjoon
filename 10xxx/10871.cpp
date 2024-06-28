#include <iostream>
using namespace std;

void solve(void) {
  int n, x; cin >> n >> x;

  while (n--) {
    int a; cin >> a;
    if (a < x) cout << a << " ";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}