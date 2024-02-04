#include <iostream>
using namespace std;

void solve(void) {
  int a, b; cin >> a >> b;

  int ans = 1;
  while (b > a) {
    if (!(b & 1)) b >>= 1;
    else if (b % 10 == 1) b /= 10;
    else break;
    ans++;
  }
  cout << (a == b ? ans : -1);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}