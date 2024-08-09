#include <iostream>
using namespace std;

int dx[4] = {0, 1, 0, -1};
int dy[4] = {1, 0, -1, 0};

void solve(void) {
  int n; cin >> n;

  int x = 0, y = 0, d = 0, t = 1;
  while (n) {
    for (int i=0; i<t && n; i++) {
      x += dx[d]; y += dy[d]; n--;
    }
    d = (d + 1) % 4;
    if (d % 2 == 0) t++;
  }
  cout << x << " " << y;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}