#include <algorithm>
#include <iostream>
using namespace std;

void solve(void) {
  int w, h, d; cin >> w >> h >> d;

  cout << max(w-2*d, 0) * max(h-2*d, 0);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}