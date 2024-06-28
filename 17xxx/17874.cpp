#include <algorithm>
#include <iostream>
using namespace std;

void solve(void) {
  int n, h, v; cin >> n >> h >> v;

  cout << max({h*v, (n-h)*v, h*(n-v), (n-h)*(n-v)}) * 4;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}