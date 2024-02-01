#include <algorithm>
#include <iostream>
using namespace std;

void solve(void) {
  int a, b, c;
  while (cin >> a >> b >> c) {
    cout << max(b-a, c-b) - 1 << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}