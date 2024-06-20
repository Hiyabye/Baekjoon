#include <iostream>
using namespace std;

void solve(void) {
  int n; cin >> n;

  cout << (n & 1 ? 0 : (1<<(n>>1)));
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}