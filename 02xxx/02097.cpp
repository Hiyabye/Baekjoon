#include <iostream>
using namespace std;

void solve(void) {
  int n; cin >> n;

  int a = 1, b = 1;
  while ((a+1) * (b+1) < n) {
    if (a < b) a++;
    else b++;
  }
  cout << 2 * (a + b);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}