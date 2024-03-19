#include <iostream>
using namespace std;

void solve(void) {
  int n; cin >> n;

  cout << 1 + (n >= 206) + (n >= 218) + (n >= 229);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}