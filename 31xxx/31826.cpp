#include <iostream>
#include <map>
using namespace std;

void solve(void) {
  int n; cin >> n;

  int ans = 10000;
  map<int, int> buy, sell;
  while (n--) {
    int p, x, f; cin >> p >> x >> f;
    if (f == 1) {
      if (sell[p] > 0) {
        int tmp = min(sell[p], x);
        sell[p] -= tmp;
        x -= tmp;
        ans = p;
      }
      if (x > 0) buy[p] += x;
    } else {
      if (buy[p] > 0) {
        int tmp = min(buy[p], x);
        buy[p] -= tmp;
        x -= tmp;
        ans = p;
      }
      if (x > 0) sell[p] += x;
    }
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}