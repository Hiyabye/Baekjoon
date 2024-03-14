#include <iostream>
using namespace std;

void solve(void) {
  int a, d, k; cin >> a >> d >> k;

  if ((k-a) % d) cout << "X";
  else if ((k-a)/d < 0) cout << "X";
  else cout << (k-a)/d+1;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}