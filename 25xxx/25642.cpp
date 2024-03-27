#include <iostream>
using namespace std;

void solve(void) {
  int a, b; cin >> a >> b;

  while (a < 5 && b < 5) {
    b += a;
    if (b >= 5) break;
    a += b;
  }
  cout << (a >= 5 ? "yj" : "yt");
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}