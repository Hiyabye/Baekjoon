#include <iostream>
using namespace std;

void solve(void) {
  int a, b, h, w; cin >> a >> b >> h >> w;

  cout << ((h+a-1)/a) * ((w+b-1)/b);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}