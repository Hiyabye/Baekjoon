#include <iostream>
#include <iomanip>
using namespace std;

void solve(void) {
  double pre, cur;

  cin >> pre;
  cin >> cur;
  while (cur != 999) {
    cout << fixed << setprecision(2) << cur - pre << "\n";
    pre = cur;
    cin >> cur;
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}