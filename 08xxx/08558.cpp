#include <iostream>
using namespace std;

void solve(void) {
  int n; cin >> n;

  if (n >= 5) cout << '0';
  else if (n == 4) cout << '4';
  else if (n == 3) cout << '6';
  else if (n == 2) cout << '2';
  else cout << '1';
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}