#include <iostream>
using namespace std;

void solve(void) {
  int b; cin >> b;

  cout << 5*b - 400 << "\n";
  if (5*b - 400 > 100) cout << "-1";
  else if (5*b - 400 < 100) cout << "1";
  else cout << "0";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}