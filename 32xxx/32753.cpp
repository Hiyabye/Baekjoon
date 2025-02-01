#include <iostream>
using namespace std;

void solve(void) {
  int n, k; cin >> n >> k;

  if (n == 1) {
    while (k--) cout << "1 ";
  } else if (n == 2 && k == 1) {
    cout << "1 2";
  } else {
    cout << "-1";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}