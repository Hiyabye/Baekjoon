#include <iostream>
using namespace std;

int d[7] = {1, 2, 5, 10, 20, 50, 100};

void solve(void) {
  int n; cin >> n;

  int a = 0, b = 0;
  while (n--) {
    int x; cin >> x;
    if (a <= b) a += x;
    else b += x;
  }

  int ans = 0;
  while (a != b) {
    if (a < b) {
      for (int i=6; i>=0; i--) {
        if (b - a < d[i]) continue;
        a += d[i];
        break;
      }
    } else {
      for (int i=6; i>=0; i--) {
        if (a - b < d[i]) continue;
        b += d[i];
        break;
      }
    }
    ans++;
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}