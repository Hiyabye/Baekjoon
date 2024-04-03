#include <iostream>
using namespace std;

bool solve(int w, int h) {
  int m; cin >> m;

  return m * m <= w * w + h * h;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, w, h; cin >> n >> w >> h;
  while (n--) cout << (solve(w, h) ? "YES" : "NO") << "\n";
  return 0;
}