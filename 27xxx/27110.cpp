#include <iostream>
using namespace std;

void solve(void) {
  int n; cin >> n;
  int a, b, c; cin >> a >> b >> c;

  cout << min(n, a) + min(n, b) + min(n, c);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}